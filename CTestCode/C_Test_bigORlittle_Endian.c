#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st_typy
{
	int i;
	int a[0];
}type_a;
union
{
	int i;
	char a[2];
}*p,u;
int checkSystem()
{
	union check
	{
		int i;
		char ch;
	}c;
	c.i=1;
	return((c.ch==1)?1:0);
}

void main(void)
{
	int a[5] = {1,2,3,4,5};
	int *ptr=(int *)(&a+1);
	int i=1;
	p=&u;	
	p->a[0]=0x39;
	p->a[1]=0x38;
	if(checkSystem())
	{
		printf("计算机是小端模式\n");   
	}else{
		printf("计算机是大端模式\n\n");
	}
	printf("p->i=0x%X\n",p->i);
	
	printf("%d\n",sizeof(type_a));
	
	printf("*(&a+1-1) = %d, *(ptr-1) = %d\n",*(&a+1-1),*(ptr-1));
}
