#include"apple.h"
#include <stdlib.h>
#include <graphics.h>
int appleLie = 5;//苹果所在列
int appleHang = 4;//苹果所在行
IMAGE imgApple;
void createApple(void)
{
	//随机苹果位置：
	appleHang = rand() % 14 + 3;//3~16之间
	appleLie = rand() % 14 + 3;
}
void downapple()
{
	loadimage(&imgApple, L".\\she\\apple.bmp");
}
void showapple()
{
	putimage(appleLie * 30, appleHang * 30, &imgApple);
}
