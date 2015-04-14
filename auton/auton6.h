#ifndef AUTON6_H
#define AUTON6_H

void auton6()
{
	SensorValue[clawPiston] = 1; // Drop claw
	wait1Msec(100); // Wait 0.1 seconds
	SensorValue[clawPiston] = 0; // Open claw
	wait1Msec(250); // Wait 0.25 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] < 250) { // Drive forward 250 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	resetEncoders();
	while (SensorValue[leftEncoder] > -200) { // Drive backward 200 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	resetEncoders();
	while (SensorValue[leftEncoder] > -650) { // Turn right 650 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(127); // Raise lift
	wait1Msec(1000); // Wait 1 second

	lift(0); // Stop lift
	resetEncoders();
	while (SensorValue[leftEncoder] < 275) { // Drive forward 275 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Grab skyrise
	wait1Msec(250);

	lift(127); // Raise lift
	wait1Msec(1000); // Wait 1 seconds

	lift(0); // Stop lift
	resetEncoders();
	while (SensorValue[leftEncoder] > -320) { // Drive backward 320 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	resetEncoders();
	while (SensorValue[leftEncoder] < 155) { // Turn right 155 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(500); // Wait 0.5 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] < 135) { // Drive forward 135 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(-127); // Lower cone into peg
	wait1Msec(850); // Wait 0.85 seconds

	lift(0); // Stop lift
    wait1Msec(500); // Wait 0.5 seconds

    SensorValue[clawPiston] = 0; // Release peg
    wait1Msec(500); // Wait 0.5 seconds

    resetEncoders();
    motor[lf] = 30; // Drive forward
    motor[lb] = 30;
    motor[rf] = 30;
    motor[rb] = 30;
    wait1Msec(250); // Wait 0.25 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
    wait1Msec(100); // Wait 0.1 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] > -100) { // Back up 100 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
