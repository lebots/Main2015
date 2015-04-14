#ifndef AUTON2_H
#define AUTON2_H

void auton2()
{
	while (SensorValue[leftEncoder] > -140) { // Back up 140 ticks
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = -45;
		motor[rb] = -45;
	}

    SensorValue[clawPiston] = 1; // Drop claw
    wait1Msec(100); // Wait 0.1 seconds
    SensorValue[clawPiston] = 0; // Open claw
    wait1Msec(100); // Wait 0.1 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] < 125) { // Drive forward 125 ticks
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Grab cube
	wait1Msec(100); // Wait 0.1 seconds

	lift(127); // Raise lift
	wait1Msec(3000);

	lift(0);
	resetEncoders();
	while (SensorValue[leftEncoder] < 145) { // Turn right 145 ticks
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = -45;
		motor[rb] = -45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250); // Wait 0.25 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] < 90) { // Drive forward 90 ticks
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(-127); // Drop cube on post
	wait1Msec(1000); // Wait 1 second

	lift(0); // Stop lift
	SensorValue[clawPiston] = 0; // Release cube
	motor[lf] = -70; // Drive backward
	motor[lb] = -70;
	motor[rf] = -70;
	motor[rb] = -70;
	wait1Msec(750); // Wait 0.75 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
