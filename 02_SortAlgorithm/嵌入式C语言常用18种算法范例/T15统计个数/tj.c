/*
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
��������ַ�һһ��ASCII���ַ��Ƚ� ����� ����Ӧ�ַ�����1.
*/

#include <stdio.h>

#define uchar unsigned char

void main()
{
	uchar i,j,a[20],k=0,m=0,n=0,r=0;

	printf("������һ���ַ������س�������\n");
	for(i=0;i<20;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	for(j=0;j<i;j++)
	{
		if((('A'<=a[j])&&(a[j]<='Z'))||(('a'<=a[j])&&(a[j]<='z'))) //�жϴ�СдӢ����ĸ
			k=k+1;
		else if(('0'<=a[j])&&(a[j]<='9'))                          //�ж�����
			m=m+1;
		else if(a[j]==32)                                          //�жϿո�
			r=r+1;
		else                                                       //�����ַ�
			n=n+1;
	}
	printf("��ĸ����%d����\n",k);
	printf("���ֹ���%d��\n",m);
	printf("�ո���%d��\n",r);
	printf("�����ַ�����%d��\n",n);
}