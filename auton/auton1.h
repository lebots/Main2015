#ifndef AUTON1_H
#define AUTON1_H

void auton1()
{
	while (SensorValue[rightEncoder] < 140) { // Back up 140 ticks
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
	while (SensorValue[rightEncoder] > -125) { // Move forward 125 ticks
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Pick up cube
	wait1Msec(100); // Wait 0.1 seconds

	lift(127); // Lift full speed
	wait1Msec(3000); // Wait 3 seconds

	lift(0); // Stop lift
	resetEncoders();
	while (SensorValue[rightEncoder] > -125) { // Turn left 125 ticks
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250); // Wait 0.25 seconds

	resetEncoders();
	while (SensorValue[rightEncoder] > -90) { // Move forward 90 ticks
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(-127); // Lower cube onto post
	wait1Msec(1000); // Wait 1 second

	lift(0); // Stop lift
	SensorValue[clawPiston] = 0; // Release cube
	motor[lf] = -70; // Go backward
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
