//Drive

//Initializing the variables
int DEADZONE = 15; //makes the joystick less sensetive - higher the value, less sensetive the joystick becomes
int turn = 0; //both variable should be initialized to 0 because the drive motor speed is depended on the value of variable
int straight = 0;


//Sets Forward and Turn Value to assign motor value

//Sets forward value to driveY if drive Y is bigger then Deadzone or smaller then negative Deazone
void setForwardValue(int driveY)//drive Y is going to equal to Y axis value of joystick
{
	if(driveY > DEADZONE || driveY < -DEADZONE)
	{
		straight = driveY;
	}
	else
	{
		straight = 0;
	}
}

//Sets turn value to drive X if dirve X is bidgger then Deadzone or smaller then negative Deazone
void setTurnValue(int driveX)//drive X is going to equal to Y axis value of joystick
{
	if(driveX > DEADZONE || driveX < -DEADZONE)
	{
		turn = driveX;
	}
	else
	{
		turn = 0;
	}
}

//Sets the motor value
void drive()
{
	motor[leftDriveMotor] = straight + turn;
	motor[rightDriveMotor] = straight - turn;
}
//When turn value is greater(goint to right: +) the motor goes faster than right, turning the robot to right
