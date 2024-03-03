#include<stdio.h>
#include<string.h>
#include"linkedlist.h"

int main012()
{
	PLinkedList list = createLinkedList();
	push(list,"11");
	push(list, "22");
	push(list, "33");
	pop(list);
	pop(list);
	pop(list);
	pop(list);

	return 0;
}