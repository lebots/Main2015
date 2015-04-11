#ifndef AUTON3_H
#define AUTON3_H

void auton3()
{
    SensorValue[clawPiston] = 1;
    wait1Msec(100);
    SensorValue[clawPiston] = 0;
    wait1Msec(250);
    
	while (SensorValue[leftEncoder] < 400) {
		motor[lf] = 50;
		motor[lb] = 50;
		motor[rf] = 50;
		motor[rb] = 50;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1;
	wait1Msec(750);

	motor[lf] = -50;
	motor[lb] = -50;
	motor[rf] = -50;
	motor[rb] = -50;
	wait1Msec(1000);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250);

	SensorValue[clawPiston] = 0;
	wait1Msec(500);

	motor[lf] = -50;
	motor[lb] = -50;
	motor[rf] = -50;
	motor[rb] = -50;
	wait1Msec(250);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
