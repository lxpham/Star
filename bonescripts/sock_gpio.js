// Remote control of BeagleBone USR LED
// Server-side Node.JS code.
// Jaakko Ala-Paavola, 2013-08-14

var app = require('http').createServer(httpserver);
var io = require('socket.io').listen(app);
var fs = require('fs');
var b = require('bonescript');
 
app.listen(8070);

var led = 'USR3';
var input = "P8_19";
var output = "P8_35";
 
setup = function() {
    b.pinMode(led, OUTPUT);
    b.digitalWrite(led,b.HIGH);
    
    b.pinMode(output, OUTPUT);
    b.digitalWrite(output,b.HIGH);
    
    b.pinMode(input,INPUT);
};

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
  socket.on('input', function (data) {
    console.log(data);
    if (data == 'read'){
        socket.emit('show', b.digitalRead(input));
        socket.broadcast.emit('show', b.digitalRead(input));
    }
  });
  
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
// Remote control of BeagleBone USR LED
// Server-side Node.JS code.
// Jaakko Ala-Paavola, 2013-08-14

var app = require('http').createServer(httpserver);
var io = require('socket.io').listen(app);
var fs = require('fs');
var b = require('bonescript');
 
app.listen(8070);

var led = 'USR3';
var input = "P8_19";
var output = "P8_35";
 
setup = function() {
    b.pinMode(led, OUTPUT);
    b.digitalWrite(led,b.HIGH);
    
    b.pinMode(output, OUTPUT);
    b.digitalWrite(output,b.HIGH);
    
    b.pinMode(input,INPUT);
};

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
  socket.on('input', function (data) {
    console.log(data);
    if (data == 'read'){
        socket.emit('show', b.digitalRead(input));
        socket.broadcast.emit('show', b.digitalRead(input));
    }
  });
  
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
