/*
 * global.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include "global.h"
int status=0;
int fsmTraffic[3]={5,3,2};
int LED7State=0;
int cursorFirstTime=1;
int idxNS=1;
int idxWE=0;
int valueOfNS=0;
int valueOfWE=0;
int mode[4]={1,2,3,4};
int cursorForsaveValue[3]={0,0,0};
int saveOldvalue[3]={0,0,0};
int jumpState=0;
void recalculateFSM(int i){
	if(i==0){
		fsmTraffic[1]=fsmTraffic[0]-fsmTraffic[2];

	}else if(i==1||i==2){
		fsmTraffic[0]=fsmTraffic[1]+fsmTraffic[2];

	}


}
