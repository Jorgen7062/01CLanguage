#include <stdio.h>
int main()
{ 
	int i,a[10],*p=a;
	
	printf("please enter 10 integer numbers:");
	for(i=0;i<10;i++)
		scanf("%d",p++);
	
	p=a;			//重新将数组的首元素传递给p
	
	for(i=0;i<10;i++,p++)
		printf("%d ",*p);
	
	printf("\n");
	
	return 0;
}
