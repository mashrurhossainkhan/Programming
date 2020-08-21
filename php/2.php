</!DOCTYPE html>
<html>
<head>
	<title>Prime numbrt</title>
</head>
<body>
	<?php
		if ($_SERVER["REQUEST_METHOD"] == "POST") {
		$input = $_POST["1input"];
		
		for($i=$input; $i>=1; $i--){
			for($x=$i; $x<=$input; $x++){
				echo "$x";
			}
			echo "<br>";
		}

		for($t=$input-1; $t>=1; $t--){
			for($e=1; $e<= $input-$t; $e++){
				echo "&nbsp &nbsp";
			}
			for($j=$t; $j>=1; $j--){
				echo "$j";
		}
		echo "<br>";
		}
	}
	?>

	<form action="" method="post">
		1st Input: <input type="text" name="1input"><br>
<input type="submit">
</form>
</body>
</html>