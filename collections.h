#pragma once
#include "linkedlist.h"


/*������2 ׷�ӵ�����1�ĺ���*/
void  addAll__(PLinkedList list1, PLinkedList list2);
/*�������������*/
void*  max__(PLinkedList list,Compare fun);
/*������С������*/
void*  min__(PLinkedList list,Compare fun);
/*���� �����±��Ӧ��������*/
void swap__(PLinkedList list, int i, int j);
/*������ �� Compare�ȽϹ��� �������� */
void sort__(PLinkedList list,Compare fun );
/*ʹ���۰����˼· ��ѯĳkey���ݵ��±�*/
int binarySearch__(PLinkedList list,   void * key, Compare fun);
/*���������˳��*/
void shuffle__(PLinkedList list);
/*�������Ա������β����*/
void  reverse__(PLinkedList list);
/*�Ѹ���fun�ȽϹ���������� �滻���µ�������*/
void replaceAll__(PLinkedList list,  void *oldVal,   void *newVal, Compare fun  );
	 