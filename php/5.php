<?php
	$d=array('A' , '0' , '0');

	for($i=0; $i<5; $i++){
		$d[2]++;
		for($j=0; $j<3; $j++){
			echo $d[$j];
		}
		echo "<br>";
	}
?>