/*
背景：FreeRTOS  中文手册P55 指针变量的值 强转到 long，之后再取long的值的地址 
验证：这种用法是否可行
结论：总体效果是可以把传进来的地址本身的值存入队列
	  如果传进来的值是整型类型，该数值应该也可以传进来（待测试） 
*/
#include <stdio.h>

void vCTest_pointer_int(int *p_int)
{
	long long_test; 
	
	long_test =  (long) p_int;
	
	printf("\n被调用函数\n");
	printf("指针地址p:p_int = %p\n",p_int);
	printf("指针数值d:p_int = %d\n",(*p_int));
	printf("\n");	
	printf("long地址: long_test = %p\n",long_test);
	printf("long数值：long_test = %X\n",long_test);
	printf("long数值：long_test = %d\n",*(int *)long_test);	
	printf("\n");		
	
	return;
} 


/*Function*/
int main()
{
	int int_test = 100;
	long int long_test = 200;
	int *p_int;
	
	p_int = &int_test;
	
	printf("sizeof(int_test)	= %d\n",sizeof(int_test));
	printf("sizeof(long_test)	= %d\n",sizeof(long_test));	
	printf("sizeof(p_int) 		= %d\n",sizeof(p_int));
	/**/
	printf("主程序：地址p:int_test = %p\n",&int_test);
	printf("主程序：数值d:int_test = %d\n",int_test);	
	
	printf("主程序：指针地址p:p_int = %p\n",p_int);
	printf("主程序：指针数值d:p_int = %d\n",(*p_int));
	
	vCTest_pointer_int(p_int);
	
	printf("按回车键结束程序...\n");
	getchar();

	return 0;
}
