/*
������FreeRTOS  �����ֲ�P55 ָ�������ֵ ǿת�� long��֮����ȡlong��ֵ�ĵ�ַ 
��֤�������÷��Ƿ����
���ۣ�����Ч���ǿ��԰Ѵ������ĵ�ַ�����ֵ�������
	  �����������ֵ���������ͣ�����ֵӦ��Ҳ���Դ������������ԣ� 
*/
#include <stdio.h>

void vCTest_pointer_int(int *p_int)
{
	long long_test; 
	
	long_test =  (long) p_int;
	
	printf("\n�����ú���\n");
	printf("ָ���ַp:p_int = %p\n",p_int);
	printf("ָ����ֵd:p_int = %d\n",(*p_int));
	printf("\n");	
	printf("long��ַ: long_test = %p\n",long_test);
	printf("long��ֵ��long_test = %X\n",long_test);
	printf("long��ֵ��long_test = %d\n",*(int *)long_test);	
	printf("\n");		
	
	return;
} 


/*Function*/
int main()
{
	int int_test = 100;
	long int long_test = 200;
	int *p_int;
	
	p_int = &int_test;
	
	printf("sizeof(int_test)	= %d\n",sizeof(int_test));
	printf("sizeof(long_test)	= %d\n",sizeof(long_test));	
	printf("sizeof(p_int) 		= %d\n",sizeof(p_int));
	/**/
	printf("�����򣺵�ַp:int_test = %p\n",&int_test);
	printf("��������ֵd:int_test = %d\n",int_test);	
	
	printf("������ָ���ַp:p_int = %p\n",p_int);
	printf("������ָ����ֵd:p_int = %d\n",(*p_int));
	
	vCTest_pointer_int(p_int);
	
	printf("���س�����������...\n");
	getchar();

	return 0;
}
