#include "collections.h"
#include "string.h"

/*数据域 参考模板*/
typedef struct  
{
	int data;

} Data,*PData ;
/*创建数据域*/
PData createData(int d);
 
int compare(const void* d1,const void* d2)
{
	PData pd1 = (PData)d1;
	PData pd2 = (PData)d2;
	return pd1->data - pd2->data;
}

int cmpASCLL(void* w1, void* w2)
{
	const char* p1 = (const char*)w1;
	const char* p2 = (const char*)w2;
	return strcmp(p1, p2);
}
int cmplen(void* w1, void* w2)
{
	const char* p1 = (const char*)w1;
	const char* p2 = (const char*)w2;
	return strlen(p1) - strlen(p2);
}

int main00()
{
	PLinkedList list = createLinkedList();
	add(list, "1111");
	add(list, "122222");
	add(list, "133");
	add(list, "14");
	add(list, "15555");
	PLinkedList list1 = createLinkedList();
	add(list1, "1111");
	add(list1, "122222");
	add(list1, "133");
	add(list1, "14");
	add(list1, "15555");
	printf("ASCLL 最大%s\n", max__(list, cmpASCLL));
	printf("LEN 最大%s\n", max__(list, cmplen));
	printf("ASCLL 最小%s\n", min__(list, cmpASCLL));
	printf("LEN 最小%s\n", min__(list, cmplen));
	//swap__(list, 0, 1);
	//sort__(list, cmpASCLL);
	//addAll__(list, list1);
	/*reverse__(list);*/
	binarySearch__(list, "14", cmpASCLL);
	return 0;
}