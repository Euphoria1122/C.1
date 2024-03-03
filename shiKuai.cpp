#include "shiKuai.h"
#include"luoKuai.h"
#include"_elsfkgame.h"
#include <graphics.h>
_BOOL enableclear(int kh);
void clearoneline(int kh);


int shiKuai[20][10] = { 0 };
void marge()
{
    for (int h=0;h<20;h++)
    {
        for (int k=0;k<10;k++)
        {
            if (luoKuai[h][k]!=0)
            {
               shiKuai[h][k]=luoKuai[h][k];
               luoKuai[h][k] = 0;
            }
        }
    }
}


_BOOL enableclear(int kh)
{
    for (int kk = 0; kk < 10; kk++)
    {
        if (shiKuai[kh][kk] == 0)
        {
            return FALSE;
        }
    }
    return TURE;
}


void clearoneline(int kh)
{
    for (int xh = kh-1; xh >= 0; xh--)
    {
        for (int xk = 0; xk < 10; xk++)
        {
            shiKuai[xh + 1][xk] = shiKuai[xh][xk];
            shiKuai[xh][xk] = 0;
        }
    }
}

int clearLine()
{
    int count = 0;
    for (int kh=0;kh<20;kh++)
    {
        if (enableclear(kh))
        {
            count++;
            clearoneline(kh);
        }
    }
    return count;
}

void updateScore(int lines)
{
    switch (lines)
    {
    case 0:
        break;
    case 1:
        score += 10;
        break;
    case 2:
        score += 20;
    case 3:
        score += 50;
    case 4:
        score += 100;
    default:
        break;
    }
}

_BOOL isOver()
{
    for (int k=3;k<6;k++)
    {
        if (shiKuai[0][k]!=0)
        {
            return TURE;
        }
    }
    return FALSE;
}

void showshiKuai()
{
    extern IMAGE imgfk[11];
    void drawImage(int  picture_x, int picture_y, IMAGE * picture);
    for (int h = 0; h < 20; h++)
    {
        for (int l = 0; l < 10; l++)
        {
            if (shiKuai[h][l] != 0)
            {
                
                drawImage(30 + l * 30, 5 + h * 30, &imgfk[shiKuai[h][l]]);
            }
        }
    }
}


