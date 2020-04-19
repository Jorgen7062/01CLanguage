/*
	求直角三角形：  斜边长度L
    求2个直角边：X,Y长度    正弦函数、余弦函数。
编程思路：调用库函数，用sin和cos计算出直角边。
*/

#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,R,L,r;

	printf("请输入斜边长度：");
	scanf("%f",&L);
	printf("请输入其中一斜角度数：");
	scanf("%f",&r);
	R=r/180*3.1415926;               //计算弧度
	a=sin(R)*L;                      //计算一直角边
	b=cos(R)*L;                      //计算另一直角边
	printf("%.2f\n",a);
	printf("%.2f\n",b);
}	