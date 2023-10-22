/*
 * global.h
 *
 *  Created on: Oct 21, 2023
 *      Author: Huy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "software_timer.h"
#include"button.h"
#include"LED_ANIMATION.h"
#include "main.h"

#define INT 1
#define GREENNS 2
#define YELLOWNS 3
#define GREENWE 4
#define YELLOWWE 5


#define RED_MAN 12
#define YELLOW_MAN 13
#define GREEN_MAN 14

#define INCREASE_RED 20
#define INCREASE_YELLOW 21
#define INCREASE_GREEN 22

extern int fsmTraffic[3];
extern int LED7State;
extern int cursorFirstTime;
extern int idxNS;
extern int idxWE;
extern int valueOfNS;
extern int valueOfWE;

// handle with mode
extern int mode[4];
extern int jumpState;

extern int status;

extern int cursorForsaveValue[3];
extern int saveOldvalue[3];
void recalculateFSM(int i);
#endif /* INC_GLOBAL_H_ */
