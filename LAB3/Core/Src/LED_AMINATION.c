/*
 * LED_AMINATION.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include "LED_ANIMATION.h"
void display7SEG1(int counter){
	switch(counter){
	case 0:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  break;
	case 1:


			  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

			  break;
	case 2:

		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		  break;
	case 3:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	case 4:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  break;
	case 5:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		break;
	case 6:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

	    break;
	case 7:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	    break;
	case 8:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		break;
	case 9:
		  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		break;




	}
}

void display7SEG2(int counter){
	switch(counter){
	case 0:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
		  break;
	case 1:


			  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
			  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
			  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
			  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
			  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
			  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
			  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);

			  break;
	case 2:

		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, SET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);

		  break;
	case 3:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		  break;
	case 4:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		  break;
	case 5:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);

		break;
	case 6:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);

	    break;
	case 7:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
	    break;
	case 8:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
	case 9:
		  HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		  HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		  HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		  HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		  HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		  HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		  HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);

		break;




	}
}


void Changed7LED(){
	if(LED7State==0){
		display7SEG1(valueOfWE/10);
		display7SEG2(valueOfNS/10);

		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);



//		setTimer3(50);
		LED7State=1;

	}else if(LED7State==1){
		display7SEG1(valueOfWE%10);
		display7SEG2(valueOfNS%10);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);






//		setTimer3(50);
		LED7State=0;
	}
}

void displayForMAN(){
     if(status==RED_MAN){
    		if(LED7State==0){
    			display7SEG1(mode[1]/10);
    			display7SEG2(fsmTraffic[0]/10);

    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);



    	//		setTimer3(50);
    			LED7State=1;

    		}else if(LED7State==1){
    			display7SEG1(mode[1]%10);
    			display7SEG2(fsmTraffic[0]%10);
    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);






    	//		setTimer3(50);
    			LED7State=0;
    		}


     }else if(status==YELLOW_MAN){
    		if(LED7State==0){
    			display7SEG1(mode[2]/10);
    			display7SEG2(fsmTraffic[2]/10);

    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);



    	//		setTimer3(50);
    			LED7State=1;

    		}else if(LED7State==1){
    			display7SEG1(mode[2]%10);
    			display7SEG2(fsmTraffic[2]%10);
    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);






    	//		setTimer3(50);
    			LED7State=0;
    		}

     }else if(status==GREEN_MAN){
    		if(LED7State==0){
    			display7SEG1(mode[3]/10);
    			display7SEG2(fsmTraffic[1]/10);

    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);



    	//		setTimer3(50);
    			LED7State=1;

    		}else if(LED7State==1){
    			display7SEG1(mode[3]%10);
    			display7SEG2(fsmTraffic[1]%10);
    			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
    			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
    			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);






    	//		setTimer3(50);
    			LED7State=0;
    		}

     }

}
