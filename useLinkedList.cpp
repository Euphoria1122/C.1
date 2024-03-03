#include "linkedlist.h"
#include "string.h"
/*数据域 参考模板*/
typedef struct  
{
	int data;

} Data,*PData ;
/*创建数据域*/
PData createData(int d);
int cmpWord(void* w1, void* w2)
{
	const char* p1 = (const char*)w1;
	const char* p2 = (const char*)w2;
	return strcmp(p1,p2)==0;
}

int main()
{
	PLinkedList list=createLinkedList();
	add(list, "111");
	add(list, "222");
	add(list, "333");
	add(list, "444");
	add(list, "555");
	//insert(list, 1, "666");
	//insert(list, 0, "777");
	//insert(list, 8, "888");
	//const char* cha=(const char*)removeIndex(list, 2);
	//printf("%s\n", cha);
	/*set(list, 2, "3333");*/
	//removeData(list, "222", cmpWord);
	//clear(list);
	iterator(list);
	while (hasNext(list))
	{
		const char* str = (const char*)next(list);
		printf("%s\n", str);
	}
	
	//free(list);
	//list = NULL;
	/*printf("%d\n", indexOf(list, "333", cmpWord));*/

	return 0;
}
 
PData createData(int d)
{
	PData pd = (PData)malloc(sizeof( Data));
	pd->data= d;
	return pd;
}