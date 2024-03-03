#pragma once
#include"datatype.h"
extern int shiKuai[20][10];
void marge();//合并落块

int clearLine();//清除行，0 1 2 3

void updateScore(int lines);

_BOOL isOver();

void showshiKuai();