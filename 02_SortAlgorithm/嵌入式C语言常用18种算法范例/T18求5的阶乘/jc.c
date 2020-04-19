/*
利用递归方法求5!
编程思路：用递归法 
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

long jc(uchar x);

void main()
{
	uchar i,j;
	uint s;

	printf("请输入所要求阶乘的数！回车结束！\n");
	scanf("%d",&j);
	s=jc(j);                                         //调用递归函数
	printf("结果为：%d\n",s);	
}

long jc(uchar x)                                        
{
	long m,n;
    
	if(x==0||x==1)                                  //输入为0或1的时候 输出结果为1
		m=1;
	else
		m=x*jc(x-1);                               //递归调用
	return m;                                      //返回函数值
}