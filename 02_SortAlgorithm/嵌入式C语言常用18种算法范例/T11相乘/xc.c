/*
1*2*3*4*5*...*n
���˼·���׳ˣ���1����һ������������û��һ���Լ�һ���ٽ��������һ��������ֱ����������������һ��Ϊֹ��
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

void main()
{
	uchar i,m;
	long a=1;
	
	printf("������һ���������س�������\n");
	scanf("%d",&m);                             //����һ������
	for(i=1;i<m+1;i++)                          //������˴���
	{
		a=a*i;                                  //������˽������һ�ν��*��˴���
	}
	printf("����Ľ��Ϊ��\n");
	printf("%d\n",a);
}
