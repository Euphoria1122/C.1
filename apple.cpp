#include"apple.h"
#include <stdlib.h>
#include <graphics.h>
int appleLie = 5;//ƻ��������
int appleHang = 4;//ƻ��������
IMAGE imgApple;
void createApple(void)
{
	//���ƻ��λ�ã�
	appleHang = rand() % 14 + 3;//3~16֮��
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
