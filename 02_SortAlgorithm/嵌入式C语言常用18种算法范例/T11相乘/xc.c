/*
1*2*3*4*5*...*n
编程思路：阶乘，用1乘于一个变量，变量没乘一次自加一，再将结果成下一个变量，直到次数与输入数字一致为止。
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uchar i,m;
	long a=1;
	
	printf("请输入一个整数！回车结束！\n");
	scanf("%d",&m);                             //输入一个数字
	for(i=1;i<m+1;i++)                          //设置相乘次数
	{
		a=a*i;                                  //本次相乘结果是上一次结果*相乘次数
	}
	printf("输出的结果为：\n");
	printf("%d\n",a);
}
