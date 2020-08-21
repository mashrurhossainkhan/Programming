<!DOCTYPE html>
<html>
<head>
	<title>Form Validation</title>
	<style type="text/css">
		span{
			color: red;
		}
		p{
			margin: 4px;
		}
		div{
			padding: 10px;
		}
		input:hover{
			background-color: #00ffff;
		}
		textarea:hover{
			background-color: #00ffff;
		}

	</style>
</head>
<body>

	<?php
		if($_SERVER["REQUEST_METHOD"] == "POST"){
			$username = $_POST["username"];
			$password = $_POST["pass"];
			$email = $_POST["email"];
			$address = $_POST["address"];
			$num = $_POST["noOfCourse"];
			$birthday = $_POST["birthday"];
			$gender = $_POST["gender"];

			$checkUser = 1;
			$checkPass = 1;
			$checkEmail = 1;
			$checkAddess = 1;
			$checkNum = 1;
			$checkBirthday = 1;

			$len = strlen($username);
			$passlen = strlen($password);

			//USERNAME
			if (empty($username)) {
				$user = "*Required";
				$checkUser = 0;
			}
			elseif(!ctype_upper($username{0})){
				$user = "*First letter should be capital";
				$checkUser = 0;
			}
			elseif ($len < 6 || $len > 15) {
				$user = "*username must be 6-15 characters long";
				$checkUser = 0;
			}
			else if(!strpos($username, ' ')){
				$user = "*Must have two words";
				$checkUser = 0;
			}
			else if(preg_match('/[0-9]/', $username)){
				$user = "*Digits are not allowed";
				$checkUser = 0;
			}

			//PASSWORD
			if (empty($password)) {
				$pass = "*Required";
				$checkPass = 0;
			}
			else if(!preg_match('/[A-Z]/', $password)){
				$pass = "*Must contain an uppercase, a lowercase, a number, and a special character";
				$checkPass = 0;
			}
			else if(!preg_match('/[a-z]/', $password)){
				$pass = "*Must contain an uppercase, a lowercase, a number, and a special character";
				$checkPass = 0;
			}
			else if(!preg_match('/[0-9]/', $password)){
				$pass = "*Must contain an uppercase, a lowercase, a number, and a special character";
				$checkPass = 0;
			}
			else if(!preg_match('/[\'^£$%&*()}{@#~?><>,|=_+¬-]/', $password)){
				$pass = "*Must contain an uppercase, a lowercase, a number, and a special character";
				$checkPass = 0;
			}
			else if($passlen < 6){
				$pass = "*Minimum 6 characters needed";
				$checkPass = 0;
			}

			//EMAIL
			if(empty($email)){
				$emailErr = "*Required"; 
				$checkEmail = 0;
			}
			elseif (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
  				$emailErr = "*Invalid email format"; 
  				$checkEmail = 0;
			}

			//ADDRESS
			if(empty($address)){
				$addressErr = "*Required";
				$checkAddess = 0; 
			}
			elseif(strlen($address)<10){
				$addressErr = "*Minimum 6 characters needed";
				$checkAddess = 0;
			}

			//Num of Courses
			if(empty($num)){
				$numErr = "*Required";
				$checkNum = 0;
			}
			elseif (!filter_var($num, FILTER_VALIDATE_INT)) {
    			$numErr = "*Not an integer";
    			$checkNum = 0;
			}
			elseif ($num < 0) {
				$numErr = "*Should be a positive integer";
				$checkNum = 0;
			}

			//Date of Birth
			if(empty($birthday)){
				$birthdayErr = "*Required";
				$checkBirthday = 0;
			}
			else{
				$diff = (date('Y') - date('Y',strtotime($birthday)));
				if($diff <18){
					$birthdayErr = "*At least 18 to register";
					$checkBirthday = 0;
				}
			}
		}
	?>

	<div style="background-color: #e6ffff;">
		<form action="" method="post" style="padding-left: 20px;align-items: center;">
			<p >Username</p><input type="text" name="username">
				<span><?php if(isset($user)) echo $user;?></span>
			<p >Password</p><input type="Password" name="pass">
				<span><?php if(isset($pass)) echo $pass;?></span>
			<p >Email</p><input type="Email" name="email">
				<span><?php if(isset($emailErr)) echo $emailErr;?></span>
			<p >Adress</p><textarea name="address" rows = "5" cols = "40"></textarea>
				<span><?php if(isset($addressErr)) echo $addressErr;?></span>
			<p >Date of Birth</p><input type="date" name="birthday">
				<span><?php if(isset($birthdayErr)) echo $birthdayErr;?></span>
			<p >Gender</p>
				<input type="radio" name="gender" checked value="Male">Male 
				<input type="radio" name="gender" value = "Female">Female
			<p >Number of Course Enrolled</p><input type="text" name="noOfCourse">
				<span><?php if(isset($numErr)) echo $numErr;?></span><br>
			<input type="submit" value="Register" style="margin-top: 10px;">
		</form>
	</div>

	
		<?php
		if(isset($checkUser) && isset($checkPass) && isset($checkEmail) && isset($checkAddess) && isset($checkNum) && isset($checkBirthday)){
			echo "<div style='background-color: red; margin-top: 10px' align='center'>";
			if( $checkUser == 0 || $checkPass == 0 || $checkEmail == 0 || $checkAddess == 0 || $checkNum == 0 || $checkBirthday == 0){
				echo "<h1 style='color:black'>Data need to be corrected!!</h1>";
			}
			else{
				echo "<h3>Registered Successfully!!</h3>";
				echo "Username : $username<br>";
				echo "Password : $password<br>";
				echo "Email : $email<br>";
				echo "Address : $address<br>";
				echo "Date of Birth : $birthday<br>";
				echo "Gender : $gender<br>";
				echo "Number of Course Enrolled : $num<br>";
			}
		}
		?>
	</div>
</body>
</html>