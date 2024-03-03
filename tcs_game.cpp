#include "tcs_game.h"
#include <graphics.h>
IMAGE imgBG;

void gameover()
{
	extern int stop;
	stop = 1;
}
void downgameback()
{
	loadimage(&imgBG, L".\\she\\bg.bmp");
}

void showgameback()
{
	putimage(0, 0, &imgBG);
}
