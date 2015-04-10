#ifndef AUTON2_H
#define AUTON2_H

void auton2()
{   
    SensorValue[clawPiston] = 1;
    wait1Msec(50);
    SensorValue[clawPiston] = 0;
    
	while (SensorValue[leftEncoder] > -140) {
		motor[lf] = -45;
		motor[lb] = -45;
		motor[rf] = -45;
		motor[rb] = -45;
	}

	//motor[clawLift] = -100;
	wait1Msec(500);

	//motor[clawLift] = 0;
	resetEncoders();
	while (SensorValue[leftEncoder] < 130) {
		motor[lf] = 45;
		motor[lb] = 45;
		motor[rf] = 45;
		motor[rb] = 45;
	}

	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	//motor[claw] = 100;
	wait1Msec(750);

	//motor[claw] = 20;
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
	while (SensorValue[leftEncoder] < 110) {
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
	motor[llift] = 127;
	motor[llift2] = 127;
	motor[rlift] = 127;
	motor[rlift2] = 127;
	wait1Msec(1900);

	motor[llift] = 0;
	motor[llift2] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	//motor[claw] = -50;
	wait1Msec(1000);

	motor[lf] = -70;
	motor[lb] = -70;
	motor[rf] = -50;
	motor[rb] = -50;
	wait1Msec(750);

	motor[llift] = 0;
	motor[llift2] = 0;
	motor[rlift] = 0;
	motor[rlift2] = 0;
	//motor[clawLift] = 0;
	motor[lf] = 0;
	motor[lb] = 0;
	motor[rf] = 0;
	motor[rb] = 0;
	//motor[claw] = 0;
}

#endif
