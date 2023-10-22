/*
 * fsm_manual.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include"fsm_manual.h"
void fsm_manual(){
	if(isButton1Pressed()==1){
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
		    	 if(cursorForsaveValue[0]==0){
		    		 saveOldvalue[0]=fsmTraffic[0];
		    		 cursorForsaveValue[0]=1;
		    	 }

		    	 fsmTraffic[0]=fsmTraffic[0]+1;
		     }
		     if(isButton3Pressed()==3){
		    	 recalculateFSM(0);
		    	 cursorForsaveValue[0]=0;
		    	 saveOldvalue[0]=0;

		     }

			break;
		case YELLOW_MAN:
			if(saveOldvalue[0]!=0&&cursorForsaveValue[0]==1){
				fsmTraffic[0]=saveOldvalue[0];
				saveOldvalue[0]=0;
				cursorForsaveValue[0]=0;

			}



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
		    	 if(cursorForsaveValue[1]==0){
		    		 cursorForsaveValue[1]=1;
		    		 saveOldvalue[1]=fsmTraffic[2];
		    	 }
		    	 fsmTraffic[2]=fsmTraffic[2]+1;
		     }

		     if(isButton3Pressed()==3){
		    	  recalculateFSM(1);
		    	 cursorForsaveValue[1]=0;
		    	 saveOldvalue[1]=0;
		     }
			break;
		case GREEN_MAN:
			if(saveOldvalue[1]!=0&&cursorForsaveValue[1]==1){
				fsmTraffic[2]=saveOldvalue[1];
				saveOldvalue[1]=0;
				cursorForsaveValue[1]=0;

			}

			if(timer2_flag==1){
		    	 HAL_GPIO_WritePin(GPIOA, YELLOWNS_Pin|YELLOWWE_Pin|REDWE_Pin|REDNS_Pin, GPIO_PIN_SET);
			     HAL_GPIO_TogglePin(GPIOA,GREENWE_Pin|GREENNS_Pin);
			     setTimer2(50);
			}


		     if(isButton2Pressed()==2){
		    	 if(cursorForsaveValue[2]==0){
		    		 saveOldvalue[2]=fsmTraffic[1];
		    		 cursorForsaveValue[2]=1;

		    	 }
		    	 fsmTraffic[1]=fsmTraffic[1]+1;
		     }
		     if(isButton3Pressed()==3){
		    	 recalculateFSM(2);
		    	 cursorForsaveValue[2]=0;
		    	 saveOldvalue[2]=0;
		     }

				if(BTOneTimes==0){
					status=GREENNS;
					setTimer1(fsmTraffic[1]*100);
					cursorFirstTime=1;
					 idxNS=1;
					 idxWE=0;

				if(saveOldvalue[2]!=0&&cursorForsaveValue[2]==1){
						fsmTraffic[1]=saveOldvalue[2];
						saveOldvalue[2]=0;
						cursorForsaveValue[2]=0;

						}
				setTimer3(50);



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

