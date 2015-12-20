<html>
<head>
	<title>BeagleBone GPIO Toggle</title>
	<style type="text/css">
		p { display: table-cell; }
		button { width: 75px; margin: 2px auto; }
	</style>
	<?php
		if (isset($_GET['outPin']) && isset($_GET['onOff']))
		{
			$outPin = $_GET['outPin'];
			$onOff = $_GET['onOff'];
			exec( "/var/www/Star $outPin $onOff");
			print_r($outPin);
			echo "\t";
			print_r($onOff);
		}
	?>
</head>
<body>
	<div style="width: 300px; margin: 0px auto;">
		<div style="width: 150px; float: left;">
			<p>GPIO_OUT #5</p>
			<button type="button" onclick="location.href='gpioCtl.php?outPin=5&onOff=1'">ON</button>
			<button type="button" onclick="location.href='gpioCtl.php?outPin=5&onOff=0'">OFF</button>
		</div>
		<div sytle="width: 150px; margin-left: 100px;">
			<p>GPIO_OUT #6</p>
			<button type="button" onclick="location.href='gpioCtl.php?outPin=6&onOff=1'">ON</button>
			<button type="button" onclick="location.href='gpioCtl.php?outPin=6&onOff=0'">OFF</button>
		</div>
	</div>
</script>
</body>
</html>

