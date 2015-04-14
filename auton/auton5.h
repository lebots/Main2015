#ifndef AUTON5_H
#define AUTON5_H

void auton5()
{
    SensorValue[clawPiston] = 1; // Drop claw
    wait1Msec(50); // Wait 0.05 seconds
    SensorValue[clawPiston] = 0; // Open claw
    wait1Msec(250); // Wait 0.25 seconds

	motor[lf] = 50; // Drive forward
	motor[lb] = 50;
	motor[rf] = 50;
	motor[rb] = 50;
	wait1Msec(650); // Wait 0.65 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Grab cube
	wait1Msec(750); // Wait 0.75 seconds

	motor[lf] = -100; // Turn left
	motor[lb] = -100;
	motor[rf] = 100;
	motor[rb] = 100;
	wait1Msec(1000); // Wait 1 second

	motor[lf] = 50; // Drive forward
	motor[lb] = 50;
	motor[rf] = 50;
	motor[rb] = 50;
	SensorValue[clawPiston] = 0; // Open claw
	wait1Msec(1000); // Wait 1 second

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250); // Wait 0.25 seconds

	motor[lf] = -100; // Back up
	motor[lb] = -100;
	motor[rf] = -100;
	motor[rb] = -100;
	wait1Msec(250); // Wait 0.25 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
