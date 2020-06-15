int main(void)
{
    //指针
    int value = 100;
    printf("指针:%p\n", &value);

    //字符
    printf("字符:%c\n", 0x33);

    //字符串
    printf("字符串:%s\n", "hello");

    //百分号
    printf("百分号:%%\n");

    //八进制整数前加上0
    printf("%#o\n", 123);

    //十六进制整数前加上0x或0X
    printf("十六进制整数前加上0x或0X\n", 123);
    printf("%#x\n", 123);
    printf("\n");	
    printf("%#X\n", 123);
	printf("十六进制整数前加上0x或0X\n", 123);//printf("\n");	
	
	
    //浮点数一定使用小数点
    printf("%.0f\n", 1.0);
    printf("%#.0f\n", 1.0);
   // system("pause");
    return 0;
}
