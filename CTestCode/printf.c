#include<stdio.h>

int main(void)
{
    //ָ��
    int value = 100;
    printf("ָ��:%p\n", value);		//�����ĵ�ַ 
    printf("ָ��:%p\n", &value);	//��ַ�ĵ�ַ 

    //�ַ�
    printf("\n�ַ�:%c\n", 0x33);

    //�ַ���
    printf("\n�ַ���:%s\n", "hello");

    //�ٷֺ�
    printf("\n�ٷֺ�:%%\n");

    //�˽�������ǰ����0
    printf("%#o\n", 123);

    //ʮ����������ǰ����0x��0X
    printf("\nʮ����������ǰ����0x��0X\n");
    printf("%#x\n", 123);	
    printf("%#X\n", 123);
	printf("ʮ����������ǰ����0x��0X\n\n");	
	
    //������һ��ʹ��С����
    printf("%.0f\n", 1.0);
    printf("%#.0f\n", 1.0);
   // system("pause");
    return 0;
}
