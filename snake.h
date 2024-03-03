#pragma once
extern int snakeLie[100];//蛇所在列
extern int snakeHang[100];//蛇所在行
extern int snakeLength;//蛇当前长度
extern int fangXiang;//蛇方向 0右 1 上 2左 3下

/*蛇爬行*/
void snakeMove();
/*能否 吃到苹果
返回：0 不能 1能
*/
int enabledEatApple();


/*能否 出界
返回：0 不能 1能
*/
int enabledOut();

/*能否吃到自己
返回：0 不能 1能
*/
int enabledEatSelf();

/*蛇 长个*/
void grow();

void snakeup();

void snakedown();

void snakeleft();

void snakeright();

void downsnake();

void showsnake();