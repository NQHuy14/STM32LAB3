/*
 * button.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */
#include"button.h"
int BTOneTimes=0;
int button_flag[3]={0,0,0};
int keyReg[12]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,NORMAL_STATE,
		NORMAL_STATE};
int timerForKeyPress[3]={200,200,200};
int isButtonPressed(){
	if(button_flag[0]==1){
		button_flag[0]=0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){
	if(button_flag[1]==1){
			button_flag[1]=0;
			return 2;
	}
	return 0;

}
int isButton3Pressed(){
	if(button_flag[2]==1){
	  button_flag[2]=0;
			return 3;
	}
	return 0;
}
void subKeyProcess(int button){
	if(button==1){
		button_flag[0]=1;

	}else if(button==2){
		button_flag[1]=1;
	}else if(button==3){
		button_flag[2]=1;
	}
}
void getKeyInput(){
	keyReg[0]=keyReg[1];
	keyReg[1]=keyReg[2];
	keyReg[2]=HAL_GPIO_ReadPin(BT1_GPIO_Port, BT1_Pin);
	if((keyReg[0]==keyReg[1])&&(keyReg[1]==keyReg[2])){
        if(keyReg[3]!=keyReg[2]){
        	keyReg[3]=keyReg[2];
        	if(keyReg[2]==PRESSED_STATE){
        		subKeyProcess(1);
        		timerForKeyPress[0]=200;
        	}
        }else {
        	timerForKeyPress[0]--;
        	if(timerForKeyPress[0]==0){
        		keyReg[3]=NORMAL_STATE;
        	}



        }
	}
	// button 2
	keyReg[4]=keyReg[5];
	keyReg[5]=keyReg[6];
	keyReg[6]=HAL_GPIO_ReadPin(BT2_GPIO_Port, BT2_Pin);
	if((keyReg[4]==keyReg[5])&&(keyReg[5]==keyReg[6])){
        if(keyReg[7]!=keyReg[6]){
        	keyReg[7]=keyReg[6];
        	if(keyReg[6]==PRESSED_STATE){
        		subKeyProcess(2);
        		timerForKeyPress[1]=200;
        	}
        }else {
        	timerForKeyPress[1]--;
        	if(timerForKeyPress[1]==0){
        		keyReg[7]=NORMAL_STATE;
        	}



        }
	}
	// button 3
	keyReg[8]=keyReg[9];
	keyReg[9]=keyReg[10];
	keyReg[10]=HAL_GPIO_ReadPin(BT3_GPIO_Port, BT3_Pin);
	if((keyReg[8]==keyReg[9])&&(keyReg[9]==keyReg[10])){
        if(keyReg[11]!=keyReg[10]){
        	keyReg[11]=keyReg[10];
        	if(keyReg[10]==PRESSED_STATE){
        		subKeyProcess(3);
        		timerForKeyPress[2]=200;
        	}
        }else {
        	timerForKeyPress[2]--;
        	if(timerForKeyPress[2]==0){
        		keyReg[11]=NORMAL_STATE;
        	}



        }
	}
}




