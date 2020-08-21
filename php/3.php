<!DOCTYPE html>
<html>
<head>
	<title>Palindrome</title>
</head>
<body>
	<form action="" method="POST">
		SAMPLE INPUT: <input type="text" name="Palindrome">
		<input type="submit" name="">
	</form>

	<?php
		if($_SERVER['REQUEST_METHOD']=='POST'){
			$x=$_POST['Palindrome'];
			$y=strlen($x);
			$z=$y/2;
			$flag=0;
			$j=$y-1;
			for($i=0; $i<$z; $i++){
				
					if($x[$i]!=$x[$j]){
						$flag=1;
						break;		
						}
						$j--;
					}
				
			

			if($flag==1){
				echo "Not a Palindrome";
			}else{
				echo "Palindrome";
			} 
		}
	?>
</body>
</html>