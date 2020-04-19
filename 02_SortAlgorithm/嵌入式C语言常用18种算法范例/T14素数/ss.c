/*
判断101-200之间有多少个素数，并输出所有素数。
判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。
编程思路：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。
*/

#include <stdio.h>
#include <math.h>

#define uchar unsigned char

void main()
{
	uchar i,j,k;

	for(i=101;i<200;i+=2)
	{
		j=sqrt(i);                 //求出算术平方根
		for(k=2;k<=j;k++)		   //用判断的数 除以一个从2到算术平方根的数 若有被整除的 则跳出循环 此数不是素数
		{
			if(i%k==0)
				break;
		}
		if(k>=j+1)                //若都没被整除的数 则此数为素数 输出此数
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}