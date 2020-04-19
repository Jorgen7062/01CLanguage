/*
把两个字符串连接
编程思路：调用库函数，将一段字符串添加到另一段字符串后面
*/

#include <stdio.h>
#include <string.h> 

main() 
{
	char a[40],b[20];

	printf("请输入第一个字符串！回车结束！\n");
	scanf("%s",&a);                                  //输入第一段字符串
	printf("请输入第二个字符串！回车结束！\n");
	scanf("%s",&b);                                 //输入第二段字符串
	strcat(a,b);                                    //调用库函数实现字符串的连接
	printf("输出如下所示：\n");
	printf("%s\n",a);
} 
