/*
���õݹ鷽����5!
���˼·���õݹ鷨 
*/

#include <stdio.h>

#define uchar unsigned char
#define uint unsigned int

long jc(uchar x);

void main()
{
	uchar i,j;
	uint s;

	printf("��������Ҫ��׳˵������س�������\n");
	scanf("%d",&j);
	s=jc(j);                                         //���õݹ麯��
	printf("���Ϊ��%d\n",s);	
}

long jc(uchar x)                                        
{
	long m,n;
    
	if(x==0||x==1)                                  //����Ϊ0��1��ʱ�� ������Ϊ1
		m=1;
	else
		m=x*jc(x-1);                               //�ݹ����
	return m;                                      //���غ���ֵ
}