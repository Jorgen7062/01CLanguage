/*
	��ֱ�������Σ�  б�߳���L
    ��2��ֱ�Ǳߣ�X,Y����    ���Һ��������Һ�����
���˼·�����ÿ⺯������sin��cos�����ֱ�Ǳߡ�
*/

#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,R,L,r;

	printf("������б�߳��ȣ�");
	scanf("%f",&L);
	printf("����������һб�Ƕ�����");
	scanf("%f",&r);
	R=r/180*3.1415926;               //���㻡��
	a=sin(R)*L;                      //����һֱ�Ǳ�
	b=cos(R)*L;                      //������һֱ�Ǳ�
	printf("%.2f\n",a);
	printf("%.2f\n",b);
}	