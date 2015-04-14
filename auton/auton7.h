#ifndef AUTON7_H
#define AUTON7_H

void auton7()
{
	SensorValue[clawPiston] = 1; // Drop claw
	wait1Msec(100); // Wait 0.1 seconds
	SensorValue[clawPiston] = 0; // Open claw
	wait1Msec(250); // Wait 0.25

	resetEncoders();
	while (SensorValue[rightEncoder] > -240) { // Drive forward 240 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	resetEncoders();
	while (SensorValue[rightEncoder] < 200) { // Drive backward 200 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	resetEncoders();
	while (SensorValue[rightEncoder] < 570) { // Turn Right 570 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(127); // Raise lift
	wait1Msec(1100); // Wait 1.1 Seconds

	lift(0); // Stop lift
    motor[lf] = 40; // Drive forward
	motor[lb] = 40;
	motor[rf] = 40;
	motor[rb] = 40;
    wait1Msec(600); // Wait 0.6 seconds

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1; // Grab peg
	wait1Msec(250); // Wait 0.25 seconds

	lift(127); // Raise lift more
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
	while (SensorValue[leftEncoder] > -320) { // Turn left 320 ticks
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(500); // Wait 0.5 seconds

	resetEncoders();
	while (SensorValue[leftEncoder] < 85) { // Drive forward 85 ticks
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0; // Stop drive
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(-127); // Lower peg into base
	wait1Msec(850); // Wait 0.85 seconds

	lift(0); // Stop lift
    wait1Msec(500); // Wait 0.5 seconds

    SensorValue[clawPiston] = 0; // Release peg
    wait1Msec(500); // Wait 0.5 seconsd

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
	while (SensorValue[leftEncoder] > -100) { // Drive backward 100 ticks
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
