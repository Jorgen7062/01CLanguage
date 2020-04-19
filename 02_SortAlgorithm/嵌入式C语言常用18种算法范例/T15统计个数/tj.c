/*
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
将输入的字符一一与ASCII的字符比较 若相符 则相应字符数加1.
*/

#include <stdio.h>

#define uchar unsigned char

void main()
{
	uchar i,j,a[20],k=0,m=0,n=0,r=0;

	printf("请输入一段字符串！回车结束！\n");
	for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	for(j=0;j<i;j++)
	{
		if((('A'<=a[j])&&(a[j]<='Z'))||(('a'<=a[j])&&(a[j]<='z'))) //判断大小写英文字母
			k=k+1;
		else if(('0'<=a[j])&&(a[j]<='9'))                          //判断数字
			m=m+1;
		else if(a[j]==32)                                          //判断空格
			r=r+1;
		else                                                       //其他字符
			n=n+1;
	}
	printf("字母共有%d个！\n",k);
	printf("数字共有%d个\n",m);
	printf("空格共有%d个\n",r);
	printf("其他字符共有%d个\n",n);
}