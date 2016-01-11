var b = require('bonescript');

var port = '/dev/i2c-2'
var address = 0x68;

b.i2cOpen(port, address);

b.i2cReadBytes(port, 2, 8, onReadBytes);

function onReadBytes(x) {
             console.log(JSON.stringify(x));
             if (x.event == 'callback') {
				console.log("We are here!");
             }
         }
         
b.i2cWriteBytes(port, 0x1, [0x01], onWriteBytes);
			
 
 function onWriteBytes (x){
     console.log("just write!");
 }
 
 function onReadBytes(x) {
             console.log(JSON.stringify(x));
             if (x.event == 'callback') {
				console.log("We are here!");
             }
         }
         
