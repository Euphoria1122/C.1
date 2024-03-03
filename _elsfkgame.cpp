#include"_elsfkgame.h"
#include <graphics.h>
int score = 0;
IMAGE imgbg;
IMAGE imgfk[11];

void gameOver()
{
	extern int stop;
	stop = 1;
}

void initgame1()
{
	loadimage(&imgbg, L".\\images\\2\\bg-1.png");
}

void backgame()
{
	putimage(0, 0, &imgbg);
}

void loadboard()
{
	TCHAR imgPath[100];
	for (int c = 0; c < 11; c++)
	{
		_stprintf(imgPath, L".\\images\\2\\%d.png", c);
		loadimage(&imgfk[c], imgPath);
	}
}

void showlevelandscore()
{
	settextstyle(18, 0, _T("ºÚÌå"));
	settextcolor(0xffffff);
	TCHAR str[100];
	_stprintf(str, L"%d·Ö", score);
	outtextxy(390, 228, str);
	_stprintf(str, L"Level %d", 1);
	outtextxy(390, 294, str);
}
