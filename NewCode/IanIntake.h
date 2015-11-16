//intake roller

//sets intake motor value
void intakeRoller(bool on)//has to press  to move the intake
{
	if(on == true)//when parameter is true, the intake moves
	{
		motor[rightIntakeMotor] = 127;
		motor[leftIntakeMotor] = 127;
	}
	//the motor will move in full speed. Decreasing the value will slow down the motor speed or the intake speed

	else //when parameter is false, the intake stops
	{
		motor[rightIntakeMotor] = 0;
		motor[leftIntakeMotor] = 0;
	}
}
