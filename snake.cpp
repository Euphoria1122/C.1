#include "snake.h"
#include "apple.h"
#include <graphics.h>
int snakeLie[100] = { 10,10,10,10,10 };//��������
int snakeHang[100] = { 10,11,12,13,14 };//��������
int snakeLength = 5;//�ߵ�ǰ����
int fangXiang = 1;//�߷��� 0�� 1 �� 2�� 3��
IMAGE imgBody;
IMAGE imgHead[4];
void snakeMove()
{
	for (int j = snakeLength - 1; j >= 1; j--)
	{
		snakeHang[j] = snakeHang[j - 1];
		snakeLie[j] = snakeLie[j - 1];
	}

	//�� ͷ��
	switch (fangXiang)
	{
	case 0:
		snakeLie[0]++;
		break;
	case 1:
		snakeHang[0]--;
		break;
	case 2:
		snakeLie[0]--;
		break;
	case 3:
		snakeHang[0]++;
		break;
	}

}

int enabledEatApple()
{
	return appleHang == snakeHang[0]
		&& appleLie == snakeLie[0];
}

int enabledOut()
{
	return snakeHang[0] == 0 || snakeHang[0] == 19
		|| snakeLie[0] == 0 || snakeLie[0] == 19;
}

int enabledEatSelf()
{
	int yao = 0; //���費ҧ
	for (int i = 1; i < snakeLength; i++)
	{
		if (snakeHang[0] == snakeHang[i] && snakeLie[0] == snakeLie[i]) {
			yao = 1;//�Ʒ�����
			break;
		}
	}
	return yao;
}

void grow()
{

}

void snakeup()
{
	if (fangXiang != 3)
	{
		fangXiang = 1;
	}
}

void snakedown()
{
	if (fangXiang != 1)
	{
		fangXiang = 3;
	}
}

void downsnake()
{
	loadimage(&imgBody, L".\\she\\body.bmp");

	TCHAR str[100];
	for (int i = 0; i < 4; i++)
	{
		_stprintf(str, L".\\she\\head%d.bmp", i);
		loadimage(&imgHead[i], str);
	}
}


void showsnake()
{
	putimage(snakeLie[0] * 30, snakeHang[0] * 30, &imgHead[fangXiang]);
	for (int i = 1; i < snakeLength; i++)
	{
		putimage(snakeLie[i] * 30, snakeHang[i] * 30, &imgBody);
	}
}

void snakeleft()
{
	if (fangXiang != 0)
	{
		fangXiang = 2;
	}
}
void snakeright()
{
	if (fangXiang != 2)
	{
		fangXiang = 0;
	}
}