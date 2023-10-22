/*
 * fsm_auto.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include"fsm_auto.h"

void fsm_automatic_run(){
	if(cursorFirstTime==1){
		cursorFirstTime=0;
		valueOfNS=fsmTraffic[idxNS];
		valueOfWE=fsmTraffic[idxWE];
	}


	if(timer4_flag==1){
		if(valueOfNS>0){
			valueOfNS--;
			if(valueOfNS<=0){
				idxNS++;
				if(idxNS>2){
					idxNS=0;
				}
				valueOfNS=fsmTraffic[idxNS];
			}

		}

		if(valueOfWE>0){
			valueOfWE--;
			if(valueOfWE<=0){
				idxWE++;
				if(idxWE>2){
					idxWE=0;
				}
				valueOfWE=fsmTraffic[idxWE];
			}

		}


		setTimer4(100);
	}


	 if(timer3_flag==1){
	  if(BTOneTimes==0||BTOneTimes==1){
		 Changed7LED();
	  }else {
		  displayForMAN();
	  }

		 setTimer3(50);
	 }

		if(isButton1Pressed()==1){
		   BTOneTimes++;
		   if(BTOneTimes>=5){
			  BTOneTimes=0;
		   }

		}
	switch(status){
	 case INT:
		 HAL_GPIO_WritePin(REDNS_GPIO_Port, REDNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENNS_GPIO_Port, GREENNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWNS_GPIO_Port, YELLOWNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(REDWE_GPIO_Port, REDWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENWE_GPIO_Port, GREENWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWWE_GPIO_Port, YELLOWWE_Pin, GPIO_PIN_SET);
		 status=GREENNS;
		 setTimer1(fsmTraffic[1]*100);

		break;
	 case GREENNS:
		 HAL_GPIO_WritePin(REDNS_GPIO_Port, REDNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENNS_GPIO_Port, GREENNS_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(YELLOWNS_GPIO_Port, YELLOWNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(REDWE_GPIO_Port, REDWE_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(GREENWE_GPIO_Port, GREENWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWWE_GPIO_Port, YELLOWWE_Pin, GPIO_PIN_SET);
		 if(timer1_flag==1)// automatic
		 {
			 status=YELLOWNS;
			 setTimer1(fsmTraffic[2]*100);
		 }
		 if(BTOneTimes==2){
			 status=RED_MAN;
			 setTimer2(50);
		 }
		 break;
	 case YELLOWNS:
		 HAL_GPIO_WritePin(REDNS_GPIO_Port, REDNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENNS_GPIO_Port, GREENNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWNS_GPIO_Port, YELLOWNS_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(REDWE_GPIO_Port, REDWE_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(GREENWE_GPIO_Port, GREENWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWWE_GPIO_Port, YELLOWWE_Pin, GPIO_PIN_SET);
		 if(timer1_flag==1)// automatic
		 {
			 status=GREENWE;
			 setTimer1(fsmTraffic[1]*100);
		 }
		 if(BTOneTimes==2){
			 status=RED_MAN;
			 setTimer2(50);

		 }
		break;
	 case GREENWE:
		 HAL_GPIO_WritePin(REDNS_GPIO_Port, REDNS_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(GREENNS_GPIO_Port, GREENNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWNS_GPIO_Port, YELLOWNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(REDWE_GPIO_Port, REDWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENWE_GPIO_Port, GREENWE_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(YELLOWWE_GPIO_Port, YELLOWWE_Pin, GPIO_PIN_SET);
		 if(timer1_flag==1)// automatic
		 {
			 status=YELLOWWE;
			 setTimer1(fsmTraffic[2]*100);
		 }
		 if(BTOneTimes==2){
			 status=RED_MAN;
			 setTimer2(50);

		 }
		 break;
	 case YELLOWWE:
		 HAL_GPIO_WritePin(REDNS_GPIO_Port, REDNS_Pin, GPIO_PIN_RESET);
		 HAL_GPIO_WritePin(GREENNS_GPIO_Port, GREENNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWNS_GPIO_Port, YELLOWNS_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(REDWE_GPIO_Port, REDWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(GREENWE_GPIO_Port, GREENWE_Pin, GPIO_PIN_SET);
		 HAL_GPIO_WritePin(YELLOWWE_GPIO_Port, YELLOWWE_Pin, GPIO_PIN_RESET);
		 if(timer1_flag==1){// automatic

		  status=GREENNS;
		  setTimer1(fsmTraffic[1]*100);
		 }
		 if(BTOneTimes==2){
			 status=RED_MAN;
			 setTimer2(50);

		 }
		 break;

	}

}


