/*
   ��ʵ��Բ
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

  ���˼·����forѭ����ӡ*  ��Ϊһ��Բ ��ֱ�Ӵ�ӡ*��һ��Բ
*/

#include <stdio.h>

#define uchar unsigned char

void main()
{
	uchar i,j,k;
                             //��forѭ����ӡ * ��һ��Բ
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
	printf("  * * *  \n");   //ֱ�Ӵ�ӡ  * ��һ��Բ
	printf("* * * * *\n");
	printf("* * * * *\n");
	printf("* * * * *\n");
	printf("  * * *  \n");
}

