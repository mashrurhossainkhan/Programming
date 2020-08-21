<!DOCTYPE html>
<html>
<head>
	<title>table</title>
</head>
<body>
	<?php
		echo "<table border=1>";
			$x=8;
			$y=1;

			for($i=1; $i<=6; $i++){
				$x-=7;
				$y=1;
				echo "<tr>";
				for($j=1; $j<=5; $j++){
					echo "<td>".$x."*".$y."=".$x*$y."</td>";
					$x+=2;
					$y++;
				}
				echo "</tr>";
			}
		echo "</table>";

	?>
</body>
</html>