#ifndef AUTON1_H
#define AUTON1_H

void auton1()
{
	while (SensorValue[rightEncoder] < 140) {
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = -45;
		motor[rb] = -45;
	}
    
    SensorValue[clawPiston] = 1;
    wait1Msec(50);
    SensorValue[clawPiston] = 0;
    
	resetEncoders();
	while (SensorValue[rightEncoder] > -150) {
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
	wait1Msec(750);

	motor[llift] = -127;
	motor[llift2] = -127;
	motor[rlift] = -127;
	motor[rlift2] = -127;
	wait1Msec(5000);

	motor[llift] = 0;
	motor[llift2] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	resetEncoders();
	while (SensorValue[rightEncoder] > -110) {
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = 45;
		motor[rb] = 45;
	}


	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250);

	resetEncoders();
	while (SensorValue[rightEncoder] > -125) {
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	motor[llift] = 127;
	motor[llift2] = 127;
	motor[rlift] = 127;
	motor[rlift2] = 127;
	wait1Msec(1900);

	motor[llift] = 0;
	motor[llift2] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	SensorValue[clawPiston] = 0;
	motor[lf] = 25;
	motor[lb] = 25;
	motor[rf] = 25;
	motor[rb] = 25;
	wait1Msec(1000);

	motor[lf] = -50;
	motor[lb] = -50;
	motor[rf] = -70;
	motor[rb] = -70;
	wait1Msec(750);

	motor[llift] = 0;
	motor[llift2] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
