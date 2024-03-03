#pragma once
#include"datatype.h"
extern int luoKuai[20][10];

_BOOL leftNotOut();//左不出界

_BOOL leftNotStop();//左不阻挡

void leftMove();//右左移

_BOOL rightNotOut();//右不出界

_BOOL rightNotStop();//右不阻挡

void rightMove();//右移

_BOOL downNotOut();//下不出界

_BOOL downNotStop();//下不阻挡

void downMove();//下移

void newLuoKuai();//新落块

void showdownboard();