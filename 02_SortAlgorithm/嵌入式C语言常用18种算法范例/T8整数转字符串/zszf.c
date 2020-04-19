/*
    把整数按照进制数转换为相应进制的字符串（要考虑符号），
     比如 -1234，转换为 “-1234” ，支持10进制，16进制。
	  编程思路：先判断输入的整数的正负，若负数则取它相反数。将此数用短除法分别计算出10进制与16进制
       的结果 再输出。
*/

#include <stdio.h>

#define uchar unsigned char

void main()
{
	int a,b[20],c;
	uchar i=0;
	char j;           //j一定为有符合的数 因为j--最后是负数 

	printf("请输入！回车结束！\n");
	scanf("%d",&a);           //输入一个整数
	
	c=a;
	if(c>=0)              //判断正负
	{
		do
		{                  //用短除法计算10进制的结果 存入数组
			b[i]=c%10;
			c=c/10;
			i=i+1;
		}while(c!=0);
		for(j=i-1;j>=0;j--)	
			printf("%c",b[j]+48);	  //输出结果 结果顺序 取反   输出的是字符 所有数字要加上48
		printf("\n");
	}
	else
	{
		c=-c;                       //负数一样的求法
		do
		{
			b[i]=c%10;
			c=c/10;
			i=i+1;
		}while(c!=0);
		for(j=i-1;j>=0;j--)		
			printf("%c",b[j]+48);		
		printf("\n");
	}

	i=0;
	if(a>=0)
	{
		do
		{                           //用短除法计算16进制的结果 存入数组
			b[i]=a%16;
			a=a/16;
			i=i+1;
		}while(a!=0);
		printf("0x");
		for(j=i-1;j>=0;j--)
		{
			if(b[j]>9)
				printf("%c",b[j]+87);          //输出结果 结果顺序 取反   输出的是字符 所有字母加87 数字要加上48
			else
				printf("%c",b[j]+48);
		}
		printf("\n");
	}
	else
	{
		a=-a;                           //负数一样的求法
		do
		{
			b[i]=a%16;
			a=a/16;
			i=i+1;
		}while(a!=0);
		printf("-0x");
		for(j=i-1;j>=0;j--)
		{
			if(b[j]>9)
				printf("%c",b[j]+87);
			else
				printf("%c",b[j]+48);
		}
		printf("\n");

	}
}