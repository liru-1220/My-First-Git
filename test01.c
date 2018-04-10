#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *getchar1()
{
	char *p="abcd";
	return p;
}
char *getchar2()
{
	char *p1="abcd";
		return p1;
}
void main()
{
	char *p=NULL;
	char *p1=NULL;
	p=getchar1();
	p1=getchar2();

	printf("p:%s,p1:%s \n",p,p1);
	printf("p:%d,p1:%d \n",p,p1);

	printf("hello...");
	return ;
}
