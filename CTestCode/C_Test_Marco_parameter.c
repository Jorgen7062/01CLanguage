/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

#define hong_0	0 
#define hong_1  1

#define Marco_parameter 2, 3
/*多个参数可以用宏来替代*/

int add(int a, int b)
{
	int sum  = 0;
	
	sum = a+b;
	
	return sum;
	
}


/*Function*/
int main()
{
	int sum = 0;
#if defined(hong_0) && hong_0
	printf("hong_0\n");
	
#endif

#if defined(hong_1) && hong_1
	printf("hong_1\n");
	
#endif
	
	sum = add(Marco_parameter);
	
	printf("sum = %d\n\n",sum);
	
	
	printf("按回车键结束程序...\n");	
	getchar();

	return 0;
}






