#include <stdio.h>
/*ǿ������ת������������ȼ����ڳ�������� sum ��ֵ���ȱ�ת��Ϊ double �ͣ�Ȼ����� count���õ�һ������Ϊ double ��ֵ��*/ 
int main()
{
	int sum = 17, count = 5;
	double mean;
	
	mean = (double) sum / count;
	printf("Value of mean : %f\n", mean );	
	
	mean = (double) (sum / count);
	printf("Value of mean : %f\n", mean );
}
