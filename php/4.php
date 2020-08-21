<!doctype html>
<!DOCTYPE html>
<html>
<head>
	<title>exercise 4</title>
</head>
<body>
	<?php
	 $sort = array();
	 if ($_SERVER["REQUEST_METHOD"] == "POST") {
	$min = $_POST["1input"];
	$max = $_POST["2input"];
		for($i=0; $i<100; $i++){
			$x=rand($min,$max);
			$sort[$i] = $x;
	}

	for($p=0; $p <99; $p++){
		if($sort[$p] > $sort[$p+1]){
			$temp = $sort[$p];
			$sort[$p+1]=$sort[$p];
			$sort[$p]=$temp;
		}
	
	}

		for($i=0; $i<100; $i++){
			echo "$sort[$i] <br>";
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