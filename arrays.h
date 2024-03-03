#pragma once
#define ARR_LENGTH(arr_name) (sizeof(arr_name)/sizeof(arr_name[0])) 
#define ASC 1
#define DESC 0

/*
���ܣ���������ĳ�����±��Ӧ��ֵ 
����ֵ����
*/
void swap(int arr[], int index,int otherIndex);
/*
���ܣ�����������
������arr ������  length ���鳤��  asc������
����ֵ����
*/
void sort(int arr[] ,int length,int asc);
/*
���ܣ��۰���� 
������arr ������  length ���鳤��  n Ѱ�ҵ�����
����ֵ��n������arr�е��±꣬<0����û�ҵ�
*/
int binarySearch( int arr[] ,int length,int find );
/*
���ܣ��õ������е����ֵ
������arr ������  length ���鳤��  
����ֵ���������
*/
int max_( int arr[] ,int length  );
/*
���ܣ��õ������е���Сֵ 
������arr ������  length ���鳤�� 
����ֵ����С����
*/
int min_( int arr[]  ,int length );
/*
���ܣ��ۼ�����ĺ�
������arr ������  length ���鳤��  
����ֵ����
*/
int sum( int arr[] ,int length  );
/*
���ܣ����������ƽ��ֵ
������arr ������  length ���鳤�� 
����ֵ��ƽ��ֵ
*/
double avg( int arr[], int length );

/*
���ܣ���ת����β���ã������Ա
������arr ������  length ���鳤�� 
����ֵ����
*/
void reserveArray( int arr[], int length );
/*
���ܣ����������Ա������
������arr ������  length ���鳤��   
����ֵ����
*/
void shuffle( int arr[], int length );
/*
���ܣ����������г�Ա��ͬһ��ָ����ֵ
������arr ������  length ���鳤��  num ͳһ����ֵ
����ֵ����
*/
void fill(int arr[], int length,int num);
/*
���ܣ� ���鸴��
������from������Դ����  
      fromPos ��ʼ���±� 
	  to���ݸ��Ƶ�Ŀ������ 
	  toPosĿ�������λ��
	  length ���Ƶĳ�Ա����
����ֵ����
*/
void arrayCopy(int from[] ,int fromPos, int to[] ,int toPos, int length);

