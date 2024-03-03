#pragma once
#include <stdio.h>
#include <stdlib.h>
#include"datatype.h"

/*��������*/
PLinkedList createLinkedList();
/*�����ڵ�*/
PNode createNode(  void * data);

 /*�����µĽڵ�*/
void add(PLinkedList  list ,  void * data);
 
/*��ĳ�ڵ��λ���ϲ����½ڵ�*/
void insert(PLinkedList  list ,int index,  void * data);

/*ɾ�� ָ�� �±�Ľڵ�*/
void* removeIndex(PLinkedList  list ,int index);

/*ɾ�����ڲ������׸��ڵ�*/
void removeData(PLinkedList  list ,  void* data, Compare fun);

/*ĳ�±��Ӧ�� �ڵ�����*/
void* get(PLinkedList  list ,int index);
/*�ҵ��ڵ�*/
PNode findNode(PLinkedList  list ,int index);

/*ĳ�±��Ӧ�� �ڵ����ݽ��и��� */
void set(PLinkedList  list ,int index,  void* newdata);

/*ĳ���ݶ�Ӧ���±�*/
int indexOf(PLinkedList  list , void* data,Compare fun );

/*�ڵ�����*/
int size(PLinkedList  list );

/*�������*/
void clear(PLinkedList  list );

 /*������*/
//�����µĵ�����
void iterator(PLinkedList list);
//�Ƿ�����һ���ڵ�
int hasNext(PLinkedList list);
//ȡ����һ���ڵ�����
void* next(PLinkedList list);

/*ʵ��ջstack�Ĺ��ܣ�LIFO��last in first out */
/* ��ջ*/
void push(PLinkedList  list ,  void* data);

/*��ջ*/
void* pop(PLinkedList  list );

/*ʵ�ֶ���queue�Ĺ��ܣ�FIFO��first in first out */
void addFirst(PLinkedList  list ,  void* data);
void addLast(PLinkedList  list ,  void* data);
void* removeFirst(PLinkedList  list   );
void* removeLast(PLinkedList  list  );

 
