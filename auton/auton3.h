#ifndef AUTON3_H
#define AUTON3_H

void auton3()
{
    SensorValue[clawPiston] = 1; // Drop claw
    wait1Msec(100); // Wait 0.1 seconds
    SensorValue[clawPiston] = 0; // Open claw
    wait1Msec(250); // Wait 0.25 seconds

	while (SensorValue[leftEncoder] < 400) { // Drive forward 400 ticks
		motor[lf] = 50;
		motor[lb] = 50;
		motor[rf] = 50;
		motor[rb] = 50;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Grab cube
	wait1Msec(750); // Wait 0.75 seconds

	motor[lf] = -50; // Drive backward
	motor[lb] = -50;
	motor[rf] = -50;
	motor[rb] = -50;
	wait1Msec(1000); // Wait 1 second

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250); // Wait 0.25 seconds

	SensorValue[clawPiston] = 0; // Release cube
	wait1Msec(500); // Wait 0.5 seconds

	motor[lf] = -50; // Drive backward
	motor[lb] = -50;
	motor[rf] = -50;
	motor[rb] = -50;
	wait1Msec(250); // Wait 0.25 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
