<!DOCTYPE html>
<!DOCTYPE html>
<html>
<head>
	<title>11 chararcter</title>
</head>
<body>
	<?php

		$h = array();
		for($i=0 ; $i<5; $i++){
			$h[$i] = chr(rand(65,90));
		}
		for($i=5 ; $i<11; $i++){
			$h[$i] = rand(0,9);
		}

		for($i=0 ; $i<11; $i++){
			echo "$h[$i]";
		}
		
	?>
</body>
</html>