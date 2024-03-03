#include"string_pro.h"
#include <stdlib.h>
int contains(const char* str, const char* substr)
{
	
	return strstr(str,substr)!=NULL;
}

int startsWith(const char* str, const char* substr)
{
	return strstr(str,substr)==str;
}

int endsWith(const char* str, const char* substr)
{
	const char* p = strlen(str) - strlen(substr) + str;
	return strstr(p,substr)==0;
}

int strIndexOf(const char* str, const char* substr)
{
	const char* p = strstr(str, substr);
	return p==NULL?-1:p-str;
}

int charIndexOf(const char* str, char c)
{
	const char substr[] = { c,'\0' };
	return strIndexOf(str,substr);
}

int strLastIndexOf(const char* str, const char* substr)
{
	const char* p = str;
	const char* q = NULL;
	do {
		p = strstr(p, substr);
		if (p != NULL)
		{
			q = p;
			p++;
		}
	} while (p!=NULL);
	return q==NULL ? -1 : q-str ;
}

int charLastIndexOf(const char* str, char c)
{
	const char substr[] = { c,'\0' };
	return strLastIndexOf(str,substr);
}

int isEmpty(const char* str)
{
	return *str=='\0'? 1:0;
}

char* trimAll(char* str)
{
	char* p = str;
	int len = 0;
	while (*p)
	{
		if (*p!=' ')
		{
			str[len++] = *p;
		}
		p++;
	}
	str[len] = '\0';
	return str;
}

char* leftTrim(char* str)
{
	char* p = str;
	while (*p==' ')
	{
		p++;
	}
	strcpy(str, p);
	return str;
}

char* rightTrim(char* str)
{
	char* p = str+strlen(str);
	while (p >= str && *p == ' ')
	{
		p--;
	}
	*(p + 1) = '\0';
	return str;
}

char* toUpperCase(char* str)
{
	char* p = str;
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return str;
}

char* toLowerCase(char* str)
{
	char* p = str;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			*p += 32;
		}
		p++;
	}
	return str;
}

int strcmpIgnorecase(const char* str1, const char* str2)
{
	char*copystr1=(char*)malloc(strlen(str1) + 1);
	char* copystr2 = (char*)malloc(strlen(str2) + 1);
	strcpy(copystr1, str1);
	memcpy(copystr2, str2, strlen(str2) + 1);
	toLowerCase(copystr1);
	toLowerCase(copystr2);
	int c=strcmp(copystr1, copystr2);
	free(copystr1);
	free(copystr2);
	return c;
}

char* reserveStr(char* str)
{
	for (int i = 0, j = strlen(str)-1; i < j; i++, j--)
	{
		char t;
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
	return str;
}

char* repeat(char* d, const char* s, int n)
{
	d[0] = '\0';
	for (int i = 0; i < n; i++)
	{
		strcat(d,s);
	}
	return d;
}

char* substr(const char* s, int from, int to, char* d)
{
	memcpy(d, s+from, to - from);
	d[to-from] = '\0';
	return d;
}

char* insert(char* str, const char* sub, int index)
{
	char* p = str + index+1;
	char* temp = (char*)malloc(strlen(p) + 1);
	strcpy(temp, p);
	*p = '\0';
	strcat(str, sub);
	strcat(str, temp);
	free(temp);
	return str;
}

char* deleteCharAt(char* str, int index)
{
	if (strlen(str) > index)
	{
		strcpy(str + index, str + index + 1);
	}
	return str;
}

char* deleteSubstr(char* str, int from, int to)
{
	strcpy(str + from, str + to);
	return str;
}

char* replace(char* str, int from, int to, const char* sub)
{
	deleteSubstr(str, from, to);
	insert(str, sub, from);
	return str;
}

char* replaceAll(char* str, const char* oldsub, const char* newsub)
{
	char* p = NULL;
	int oldsublen = strlen(oldsub);
	do {
		p = strstr(str, oldsub);
		if (p != NULL)
		{
			replace(p, 0, oldsublen, newsub);
		}
	} while (p!=NULL);

	return str;
}
