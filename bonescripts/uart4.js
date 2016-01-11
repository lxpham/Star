var SerialPort = require("serialport").SerialPort
var serialPort = new SerialPort("/dev/ttyO4", {
  baudrate: 115200
});
serialPort.on("open", function () {
  console.log('open');
  serialPort.on('data', function(data) {
    console.log('data received: ' + data);
  });
  serialPort.write("WOW! IT WORK!!\n", function(err, results) {
    console.log('err ' + err);
    console.log('results ' + results);
  });
});
