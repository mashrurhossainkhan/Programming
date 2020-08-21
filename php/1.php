<!DOCTYPE html>
<html>
<head>
	<title> Prime number </title>
</head>
<body>
	<?php
	if ($_SERVER["REQUEST_METHOD"] == "POST") {
	$n = $_POST["1input"];
	$x = $_POST["2input"];
	while ( $n< $x) {
			# code..
			$flag=0;
		for($i=2; $i<=$n/2; $i++){

			if($n % $i==0){
				$flag=1;
				break;
			}
		}

		if($n==1)
			$flag=1;


		if($flag==0)
			echo "$n &nbsp";

		++$n;
	}
}
	?>

	<form action="" method="post">
		1st Input: <input type="text" name="1input"><br>
		2nd Input: <input type="text" name="2input"><br>
<input type="submit">
</form>
</body>
</html>
