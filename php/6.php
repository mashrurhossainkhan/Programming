<!DOCTYPE html>
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<?php
	if ($_SERVER["REQUEST_METHOD"] == "POST") {
		$x = $_POST["1input"];
		$sum=0;
		for($i=1; $i<=$x-1; $i++){
			if($x % $i ==0){
				$sum+=$i;
			}	
		}

		if($sum==$x){
			echo "perfect";
		}else{
			echo "not perfect";
		}
	}
	?>

	<form action="" method="post">
		1st Input: <input type="text" name="1input"><br>
<input type="submit">
</body>
</html>
