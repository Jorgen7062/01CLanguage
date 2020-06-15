#include<stdio.h>

int main(void)
{
    //指针
    int value = 100;
    printf("指针:%p\n", value);		//变量的地址 
    printf("指针:%p\n", &value);	//地址的地址 

    //字符
    printf("\n字符:%c\n", 0x33);

    //字符串
    printf("\n字符串:%s\n", "hello");

    //百分号
    printf("\n百分号:%%\n");

    //八进制整数前加上0
    printf("%#o\n", 123);

    //十六进制整数前加上0x或0X
    printf("\n十六进制整数前加上0x或0X\n");
    printf("%#x\n", 123);	
    printf("%#X\n", 123);
	printf("十六进制整数前加上0x或0X\n\n");	
	
    //浮点数一定使用小数点
    printf("%.0f\n", 1.0);
    printf("%#.0f\n", 1.0);
   // system("pause");
    return 0;
}
