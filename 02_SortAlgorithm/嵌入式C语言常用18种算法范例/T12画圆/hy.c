/*
   画实心圆
          * * *
		* * * * *
		* * * * *
		* * * * *
		  * * *

           
            ************
		   **************
		  ****************
		 ******************
		 ******************
		 ******************
		  ****************
		   **************
			************

  编程思路：用for循环打印*  成为一个圆 或直接打印*成一个圆
*/

#include <stdio.h>

#define uchar unsigned char

void main()
{
	uchar i,j,k;
                             //用for循环打印 * 成一个圆
	for(j=0;j<4;j++)
	{
		for(i=0;i<3-j;i++)
			printf(" ");
		for(i=0;i<12+2*j;i++)
			printf("*");
		printf("\n");
	}
	for(i=0;i<18;i++)
		printf("*");
	printf("\n");
	for(j=0;j<4;j++)
	{
		for(i=0;i<j;i++)
			printf(" ");
		for(i=0;i<18-2*j;i++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	printf("  * * *  \n");   //直接打印  * 成一个圆
	printf("* * * * *\n");
	printf("* * * * *\n");
	printf("* * * * *\n");
	printf("  * * *  \n");
}

