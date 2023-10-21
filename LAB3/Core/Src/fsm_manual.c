/*
 * fsm_manual.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include"fsm_manual.h"
void fsm_manual(){
	if(isButtonPressed()==1){
		BTOneTimes++;
		if(BTOneTimes>=5){
			BTOneTimes=0;
		}
	}


	switch(status){
		case RED_MAN:
		     if(BTOneTimes==3){
		    	 status=YELLOW_MAN;
		    	 setTimer2(50);
		     }
		     if(timer2_flag==1){
		    	 HAL_GPIO_WritePin(GPIOA, GREENNS_Pin|GREENWE_Pin|YELLOWNS_Pin|YELLOWWE_Pin, GPIO_PIN_SET);
		    	 HAL_GPIO_TogglePin(GPIOA,REDNS_Pin|REDWE_Pin);
		    	 setTimer2(50);
		     }
		     if(isButton2Pressed()==2){
		    	 if(cursorForsaveValue==0){
		    		 cursorForsaveValue=1;
		    		 saveOldvalue=fsmTraffic[0];
		    	 }
		    	 fsmTraffic[0]=fsmTraffic[0]+1;
		     }
		     if(isButton3Pressed()==3){
		    	 if(cursorForsaveValue==1){
		    		 cursorForsaveValue=0;
		    		 saveOldvalue=0;
		    	 }
		     }

			break;
		case YELLOW_MAN:
			if(timer2_flag==1){
		    	 HAL_GPIO_WritePin(GPIOA, GREENNS_Pin|GREENWE_Pin|REDWE_Pin|REDNS_Pin, GPIO_PIN_SET);
		    	 HAL_GPIO_TogglePin(GPIOA,YELLOWNS_Pin|YELLOWWE_Pin);
		    	 setTimer2(50);
			}
			if(BTOneTimes==4){
				status=GREEN_MAN;
				setTimer2(50);

			}

		     if(isButton2Pressed()==2){
		    	 fsmTraffic[2]=fsmTraffic[2]+1;
		     }
			break;
		case GREEN_MAN:
			if(timer2_flag==1){
		    	 HAL_GPIO_WritePin(GPIOA, YELLOWNS_Pin|YELLOWWE_Pin|REDWE_Pin|REDNS_Pin, GPIO_PIN_SET);
			     HAL_GPIO_TogglePin(GPIOA,GREENWE_Pin|GREENNS_Pin);
			     setTimer2(50);
			}
			if(BTOneTimes==0){
				status=GREENNS;
				setTimer1(fsmTraffic[1]*100);
				cursorFirstTime=1;
				 idxNS=1;
				 idxWE=0;

			}

		     if(isButton2Pressed()==2){
		    	 fsmTraffic[1]=fsmTraffic[1]+1;
		     }
			break;
//		case INCREASE_RED:
//			if(isButtonPressed()==2){
//				fsmTraffic[0]++;
//			}
//			if(isButtonPressed()==3){
//				status=RED_MAN;
//			}
//			break;
//		case INCREASE_YELLOW:
//			if(isButtonPressed()==2){
//				fsmTraffic[2]++;
//			}
//			if(isButtonPressed()==3){
//				status=YELLOW_MAN;
//			}
//			break;
//		case INCREASE_GREEN:
//			if(isButtonPressed()==2){
//				fsmTraffic[1]++;
//			}
//			if(isButtonPressed()==3){
//				status=GREEN_MAN;
//			}
//			break;

	}
}

