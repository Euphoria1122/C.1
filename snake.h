#pragma once
extern int snakeLie[100];//��������
extern int snakeHang[100];//��������
extern int snakeLength;//�ߵ�ǰ����
extern int fangXiang;//�߷��� 0�� 1 �� 2�� 3��

/*������*/
void snakeMove();
/*�ܷ� �Ե�ƻ��
���أ�0 ���� 1��
*/
int enabledEatApple();


/*�ܷ� ����
���أ�0 ���� 1��
*/
int enabledOut();

/*�ܷ�Ե��Լ�
���أ�0 ���� 1��
*/
int enabledEatSelf();

/*�� ����*/
void grow();

void snakeup();

void snakedown();

void snakeleft();

void snakeright();

void downsnake();

void showsnake();