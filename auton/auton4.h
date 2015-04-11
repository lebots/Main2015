#ifndef AUTON4_H
#define AUTON4_H

void auton4()
{
    SensorValue[clawPiston] = 1;
    wait1Msec(50);
    SensorValue[clawPiston] = 0;
    wait1Msec(250);
    
	motor[lf] = 50;
	motor[lb] = 50;
	motor[rf] = 50;
	motor[rb] = 50;
	wait1Msec(650);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	SensorValue[clawPiston] = 1;
	wait1Msec(750);

	motor[lf] = 100;
	motor[lb] = 100;
	motor[rf] = -100;
	motor[rb] = -100;
	wait1Msec(900);

	motor[lf] = 50;
	motor[lb] = 50;
	motor[rf] = 50;
	motor[rb] = 50;
	SensorValue[clawPiston] = 0;
	wait1Msec(1000);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	wait1Msec(250);

	motor[lf] = -100;
	motor[lb] = -100;
	motor[rf] = -100;
	motor[rb] = -100;
	wait1Msec(250);

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
}

#endif
