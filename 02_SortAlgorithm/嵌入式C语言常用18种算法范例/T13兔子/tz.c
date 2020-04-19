/*
	有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
	假如兔子都不死，问每个月的兔子总数为多少？
	编程思路：小   中  大  总数
         1月  1对  0   0    1
		 2月  0    1   0    1
		 3月  1    0   1    2
		 4月  1    1   1    3
		 5月  2    1   2    5
		 规律：从第三个月开始 每个月总数 是上两月总数之后。
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uchar i,j=1,k=1;
	uint m,n;

	printf("请输入月份！回车结束！\n");
	scanf("%d",&i);                       //输入月份
	if(i>2)
	{
		for(m=3;m<=i;m++)                
		{
			n=j+k;                    //n为本个月的总数
			j=k;                      //j为上上个月总数
			k=n;                      //k为上个月总数
		}
		printf("%d\n",n*2);
	}
	else
		printf("2\n");
}