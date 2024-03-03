#include "luoKuai.h"
#include<math.h>
#include <stdlib.h>
#include"shiKuai.h"
#include"_elsfkgame.h"
#include <graphics.h>
int luoKuai[20][10] = { 0 };//下落的方块
_BOOL leftNotOut()
{
    for (int m = 0; m < 19; m++)
    {
        if (luoKuai[m][0] != 0)
        {
            return FALSE;
        }
    }
    return TURE;
}

_BOOL leftNotStop()
{
    for (int k = 1; k < 10; k++)
    {
        for (int m = 0; m < 20; m++)
        {
            if (luoKuai[m][k] != 0 && shiKuai[m][k - 1]!=0)
            {
                return FALSE;
            }
        }
    }
    return TURE;
}

void leftMove()
{
    for (int k = 1; k < 10; k++)
    {
        for (int h=0;h<20;h++)
        {
            luoKuai[h][k - 1] = luoKuai[h][k];
            luoKuai[h][k] = 0;
        }
    }
}

_BOOL rightNotOut()
{
    for (int m = 0; m < 19; m++)
    {
        if (luoKuai[m][9] != 0)
        {
            return FALSE;
        }
    }
    return TURE;
}

_BOOL rightNotStop()
{
    for (int k = 8; k >= 0; k--)
    {
        for (int m = 0; m < 20; m++)
        {
            if (luoKuai[m][k] != 0 && shiKuai[m][k + 1] != 0)
            {
                return FALSE;
            }
        }
    }
    return TURE;
}

void rightMove()
{
    for (int k = 8; k >= 0; k--)
    {
        for (int m = 0; m < 20; m++)
        {
            luoKuai[m][k + 1] = luoKuai[m][k];
            luoKuai[m][k] = 0;
        }
    }
}

_BOOL downNotOut()
{
    for (int k=0;k<10;k++)
    {
        if (luoKuai[19][k] != 0)
        {
            return FALSE;
        }
    }
    return TURE;
}

_BOOL downNotStop()
{
    for (int m = 18; m>=0 ; m--)
    {
        for (int k = 0; k < 10; k++)
        {
            if (luoKuai[m][k] != 0 && shiKuai[m + 1][k] != 0)
            {
                return FALSE;
            }
           
        }
    }
    return TURE;
}

void downMove()
{
    for (int m=18;m>=0;m--)
    {
        for (int k=0;k<10;k++)
        {
            luoKuai[m+1][k] = luoKuai[m][k];
            luoKuai[m][k] = 0;
        }
    }
}

void newLuoKuai()
{
    //1 随机颜色
    int color = rand() % 10 + 1;//  1~10  
    //2 随机造型
    BLOCK bt = (BLOCK)(rand() % 5);
    switch (bt)
    {
    case T:
        luoKuai[0][3] = luoKuai[0][4] = luoKuai[0][5] = color;
        luoKuai[1][4] = color;
        break;
    case L:
        luoKuai[0][3] = color;
        luoKuai[1][3] = color;
        luoKuai[2][3] = luoKuai[2][4] = color;
        break;
    case Z:
        luoKuai[0][3] = luoKuai[0][4] = color;
        luoKuai[1][4] = luoKuai[1][5] = color;
        break;
    case I:
        luoKuai[0][3] = color;
        luoKuai[1][3] = color;
        luoKuai[2][3] = color;
        luoKuai[3][3] = color;
        break;
    case O:
        luoKuai[0][3] = luoKuai[0][4] = color;
        luoKuai[1][3] = luoKuai[1][4] = color;
        break;
    }
}

void showdownboard()
{
    void drawImage(int  picture_x, int picture_y, IMAGE * picture);
    extern IMAGE imgfk[11];
    for (int h = 0; h < 20; h++)
    {
        for (int l = 0; l < 10; l++)
        {
            if (luoKuai[h][l] != 0)
            {
                drawImage(30 + l * 30, 5 + h * 30, &imgfk[luoKuai[h][l]]);
            }
        }   
    }
}
