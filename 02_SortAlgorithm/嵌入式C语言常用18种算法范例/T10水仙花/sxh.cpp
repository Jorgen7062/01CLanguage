/*
   打印出所有的“水仙花数”， 所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。
     例如：153是一个“水仙花数”，
     因为153=1的三次方＋5的三次方＋3的三次方。
     1+125+27=126+27=153.
	 编程思路：将一个三位数的百位 十位 个位 分解出来 再 根据公式判断是否为水仙花数。
*/

#include <stdio.h>

#define uchar unsigned char
#define  uint unsigned int

void main()
{
	uchar j,k,m;
	uint n,i=100;

	printf("所有的水仙花如下：\n");
	while(i<1000)                         //设置循环判断所有的三位数
	{
		j=i/100;                          //分解三位数的百位数出来
		k=i%100/10;                       //分解三位数的十位数出来
		m=i%100%10;                       //分解三位数的个位数出来
		n=j*j*j+k*k*k+m*m*m;
		if(n==i)                          //相等则输出水仙花
		{
			printf("%d\t",i);
			i=i+1;
		}
		else
			i=i+1;
	}	
	printf("\n");
}