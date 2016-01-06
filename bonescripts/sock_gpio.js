// Remote control of BeagleBone USR LED
// Server-side Node.JS code.
// Jaakko Ala-Paavola, 2013-08-14
var b = require('bonescript');
var app = require('http').createServer(httpserver);
var io = require('socket.io').listen(app);
var fs = require('fs');

 
app.listen(8070);

var led = 'USR3';
var input = "P8_19";
var output = "P8_35";
 

    b.pinMode(led, b.OUTPUT);
    b.digitalWrite(led,b.HIGH);
    
    b.pinMode(output, b.OUTPUT);
    b.digitalWrite(output,b.HIGH);
    
    b.pinMode(input,b.INPUT);


function httpserver (req, res) {
  fs.readFile('gpio.html',
  function (err, data) {
    if (err) {
      res.writeHead(500);
      return res.end('Error loading gpio.html');
    }
 
    res.writeHead(200);
    res.end(data);
  });
}




io.sockets.on('connection', function (socket) {
      socket.emit('show', b.digitalRead(input));
});
  
  
  io.sockets.on('connection', function (socket) {
  socket.on('output', function (data) {
    console.log(data);
    if (data == 'on'){
        b.digitalWrite(output, b.HIGH); 
    }
    else {
        b.digitalWrite(output, b.LOW); 
    }
  });
  });

