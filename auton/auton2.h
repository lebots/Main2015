#ifndef AUTON2_H
#define AUTON2_H

void auton2()
{
	while (SensorValue[leftEncoder] > -140) {
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = -45;
		motor[rb] = -45;
	}

    SensorValue[clawPiston] = 1;
    wait1Msec(100);
    SensorValue[clawPiston] = 0;
    wait1Msec(100);

	resetEncoders();
	while (SensorValue[leftEncoder] < 125) {
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1;
	wait1Msec(100);

	lift(-127);
	/*motor[llift] = -127;
	motor[llift2] = -127;
    motor[llift3] = -127;
	motor[rlift] = -127;
	motor[rlift2] = -127;
    motor[rlift3] = -127;*/
	wait1Msec(3000);

	lift(0);
	/*motor[llift] = 0;
	motor[llift2] = 0;
    motor[llift3] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
    motor[rlift3] = 0;*/
	resetEncoders();
	while (SensorValue[leftEncoder] < 145) {
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = -45;
		motor[rb] = -45;
	}


	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250);

	resetEncoders();
	while (SensorValue[leftEncoder] < 90) {
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
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
	wait1Msec(1000);

	lift(0);
	/*motor[llift] = 0;
	motor[llift2] = 0;
    motor[llift3] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
    motor[rlift3] = 0;*/
	SensorValue[clawPiston] = 0;
	motor[lf] = -50;
	motor[lb] = -50;
	motor[rf] = -70;
	motor[rb] = -70;
	wait1Msec(750);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
