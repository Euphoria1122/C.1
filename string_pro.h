#pragma once
#include <string.h>
/*
���ܣ��ж�һ���ַ������Ƿ������һ���ַ���
������str��Ŀ���ַ�����
	 substr�������ҵĶ��ַ���
���أ�0 ������ 1����
������int a = contains("Hello ,how are you","are");
���� 1��
*/ 
int contains(const char* str,const char *substr) ;
 
/*
���ܣ��ж�һ���ַ����Ŀ�ͷ�Ƿ�����һ���ַ�����ͬ
������str Ŀ���ַ��� substr���Ƚ��ַ���
���أ�0 �� 1 ��
������int a =startsWith("Hello ,how are you","Hello");
����ֵ��1
*/
int startsWith(const char* str,const char *substr);
 
/*
���ܣ��ж�һ���ַ����Ľ�β�Ƿ�����һ���ַ�����ͬ
������str Ŀ���ַ��� substr���Ƚ��ַ���
���أ�0 �� 1 ��
������int a =endsWith("Hello ,how are you","are");
����ֵ��1
*/
int endsWith(const char* str,const char *substr);
 
/*
���ܣ���һ���ַ���ǰ��Ѱ����һ���ַ����״γ��ֵ��±�
������strĿ���ַ�����substrѰ���ַ���
���أ��±�λ��
������int a= strIndexOf("how are you","are");
����ֵ��4
*/
int strIndexOf(const char* str,const char* substr) ;
 
/*
���ܣ���һ���ַ���strǰ�濪ʼѰ���ַ�c�״γ��ֵ��±�
������strĿ���ַ�����c ��Ѱ�ҵ��ַ�
���أ��±�λ��
������int a= charIndexOf("how are you",'w');
����ֵ��2
*/
int charIndexOf(const char* str,char c) ;
 
/*
���ܣ���һ���ַ���β����ʼѰ����һ���ַ����״γ��ֵ��±�
������strĿ���ַ�����substrѰ���ַ���
���أ��±�λ��
������int a= strLastIndexOf("how do you do","do");
����ֵ��11
*/
int strLastIndexOf(const char* str,const char* substr) ;
 
/*
���ܣ���һ���ַ���strβ����ʼѰ���ַ�c�״γ��ֵ��±�
������strĿ���ַ�����c ��Ѱ�ҵ��ַ�
���أ��±�λ��
������int a= charLastIndexOf("how are you",'o');
����ֵ��9
*/
int charLastIndexOf(const char* str,char c) ;
 
/*
���ܣ��ж�һ���ַ����Ƿ�մ�
������str�������ַ���
���أ�0 ���� 1 ��
������int a = isEmpty("");
����ֵ 1 
*/
int isEmpty(const char* str) ;
 
/*
���ܣ�ȥ���ַ����е����пո�
������str ��Ҫȥ���ո���ַ���
���أ�������str
������
char s[] = "  how are you  ";
trimAll(s)
����ֵ��howareyou
*/
char* trimAll(char* str) ;
 
/*
���ܣ�ֻȥ���ַ����������пո�
������str: ��Ҫȥ�����ո���ַ���
���أ�������str
������
char s[] = "  how are you  ";
leftTrim(s)
����ֵ��how are you  |
*/
char* leftTrim(char* str) ;
 
/*
���ܣ�ֻȥ���ַ����Ҳ�����пո�
������str: ��Ҫȥ���Ҳ�ո���ַ���
���أ�������str
������
char s[] = "  how are you  ";
rightTrim(s)
����ֵ��  how are you|
*/
char* rightTrim(char* str) ;
 
/*
���ܣ����ַ�������ĸȫ��ת���ɴ�д 
������str�����д���ַ���
���أ�������str
������
char s[] = "how are you";
toUpperCase(s);
����ֵ�� HOW ARE YOU
*/
char* toUpperCase(char* str ) ;
 
/*
���ܣ����ַ�������ĸȫ��ת����Сд 
������str����Сд���ַ���
���أ�������str
������
char s[] = "IEEE1394";
toUpperCase(s);
����ֵ�� ieee1394
*/
char* toLowerCase(char* str ) ;
 
/*
���ܣ����Դ�Сд��ĸ���Ƚ������ַ����Ĵ�С
������str1 str2 �����Ƚϵ��ַ���
���أ�1 ���ڹ�ϵ 0 ���ڹ�ϵ -1С�ڹ�ϵ
������int a=strcmpIgnorecase("Are","are");
����ֵ��0
*/
int strcmpIgnorecase(const char* str1,const char *str2) ;
 
/*
���ܣ���һ���ַ������з�ת
������str����ת���ַ���
���أ���ת������str
������char s[] ="12345";
����ֵ��54321
*/
char* reserveStr(char *str);
 
/*
���ܣ���һ��s�ַ����ظ�����n�κ��ŵ�d�ַ���
������d���ս���ַ�����s���ظ����ַ��� n �ظ��Ĵ���
���أ�d���ս���ַ���
������char a[50];
repeat(a,"sorry!",3);
����ֵ��sorry!sorry!sorry!
*/
char* repeat(char* d,const char *s ,int n) ;
 
/*
���ܣ���һ�������е�һ���ַ������Ƶ���һ���ַ�����
������s ���� from�� to��(��������) d���λ��
���أ�d�ַ����Ľ��
������char d[20];
substr("hello world",2,5,d);
����ֵ��llo
*/
char* substr(const char* s,int from ,int to,char * d) ;
 
/*
���ܣ���sub�ַ������뵽str��ָ���±�λ��
������strĿ���ַ��� sub��������Ӵ� index ������±ꡣ
���أ�������str
������
char s[50]="how you";
insert(s,"are ",3);
����ֵ��how are you
*/
char* insert(char* str,const char *sub,int index) ;
 
/*
���ܣ����ַ�����ָ���±���ַ�ɾ����
������strĿ���ַ�����index ��ɾ���±�
���أ�������str
������char s[]="how you";
	deleteCharAt(s,1);
����ֵ��hw you	
*/
char* deleteCharAt(char* str,int index) ;
 
/*
���ܣ���str�ַ����е�һ���ַ�ɾ����
������str��ɾ�����ַ��� fromɾ����ʼ�� to �����㣨����������
���أ�������str
������
char s[]="how you";
deleteSubstr(s,0,4);
����ֵ��you
*/
char* deleteSubstr(char* str,int from ,int to) ;
 
/*
���ܣ����ַ���str��һС���ַ��滻����һ���ַ���sub
������strĿ���ַ��� from��ʼ�㣬to�����㣨���������� sub�滻������
���أ�������str
������
char s[50]="how is you";
replace(s,4,6,"are");
����ֵ��how are you
*/
char* replace(char* str,int from ,int to,const char * sub); 
 
/*
���ܣ����ַ���str�е�ĳЩ�����滻��������ַ���
������strĿ���ַ��� oldsubԭ�������� newsub �µ�����
���أ�������str
������
char s[50]="how did you did";
replaceAll(s,"did","do");
����ֵ��how do you do
*/
char* replaceAll(char* str,const char *oldsub,const char* newsub) ;
 
