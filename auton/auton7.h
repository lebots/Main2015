#ifndef AUTON7_H
#define AUTON7_H

void auton7()
{
	SensorValue[clawPiston] = 1;
	wait1Msec(100);
	SensorValue[clawPiston] = 0;
	wait1Msec(250);

	resetEncoders();
	while (SensorValue[rightEncoder] > -240) {
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	resetEncoders();
	while (SensorValue[rightEncoder] < 200) {
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	resetEncoders();
	while (SensorValue[rightEncoder] < 570) {
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(-127);
	/*motor[llift] = -127;
	motor[llift2] = -127;
	motor[llift3] = -127;
	motor[rlift] = -127;
	motor[rlift2] = -127;
	motor[rlift3] = -127;*/
	wait1Msec(1100);

	lift(0);
	/*motor[llift] = 0;
	motor[llift2] = 0;
	motor[llift3] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	motor[rlift3] = 0;*/
    motor[lf] = 40;
	motor[lb] = 40;
	motor[rf] = 40;
	motor[rb] = 40;
    wait1Msec(600);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1;
	wait1Msec(250);

	lift(-127);
	/*motor[llift] = -127;
	motor[llift2] = -127;
	motor[llift3] = -127;
	motor[rlift] = -127;
	motor[rlift2] = -127;
	motor[rlift3] = -127;*/
	wait1Msec(1000);

	lift(0);
	/*motor[llift] = 0;
	motor[llift2] = 0;
	motor[llift3] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	motor[rlift3] = 0;*/
	resetEncoders();
	while (SensorValue[leftEncoder] > -320) {
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	resetEncoders();
	while (SensorValue[leftEncoder] > -320) {
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(500);

	resetEncoders();
	while (SensorValue[leftEncoder] < 85) {
		motor[lf] = 40;
		motor[lb] = 40;
		motor[rf] = 40;
		motor[rb] = 40;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	lift(127);
	/*motor[llift] = 127;
	motor[llift2] = 127;
	motor[llift3] = 127;
	motor[rlift] = 127;
	motor[rlift2] = 127;
	motor[rlift3] = 127;*/
	wait1Msec(850);

	lift(0);
	/*motor[llift] = 0;
	motor[llift2] = 0;
	motor[llift3] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	motor[rlift3] = 0;*/
    wait1Msec(500);

    SensorValue[clawPiston] = 0;
    wait1Msec(500);

    resetEncoders();
    motor[lf] = 30;
    motor[lb] = 30;
    motor[rf] = 30;
    motor[rb] = 30;
    wait1Msec(250);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
    wait1Msec(100);

	resetEncoders();
	while (SensorValue[leftEncoder] > -100) {
		motor[lf] = -40;
		motor[lb] = -40;
		motor[rf] = -40;
		motor[rb] = -40;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
