/*
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
编程思路：推算出规律：第几个数=2*10几次方+前一个数。例如：第3个数为4*1000+444=4444 注意这里的4为输入的数字
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uchar i,m;
	uint s,j=1,k;

	printf("请输入相加的个数！回车结束！\n");
	scanf("%d",&m);
	s=m;
	for(i=1;i<m;i++)                           //设置相加次数
	{
		j=j*10;                                //计算每次相加的乘数  
		k=s+m*j;                               //计算此次的加数
		s=s+k;                                 //计算此时的和
	}
	printf("%d\n",s);
}