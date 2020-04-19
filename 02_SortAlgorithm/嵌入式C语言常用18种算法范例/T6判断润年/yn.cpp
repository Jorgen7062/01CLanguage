/*
    判断闰年  
	 编程思路：闰年能被4整除 而不能被100或者400整除
*/

#include <stdio.h>

#define uint unsigned int

void main()
{
	uint a;

	printf("请输入查询的年份！回车结束！\n");
	scanf("%d",&a);
	if((a%400==0)||(a%4==0)&&(a%100!=0))           //设置闰年的条件 能被4整除 而不能被100或者400整除
		printf("您查询的%d年是润年！\n",a);
	else
		printf("您查询的%d年不是润年！\n",a);
}