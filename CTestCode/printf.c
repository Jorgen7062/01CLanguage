int main(void)
{
    //ָ��
    int value = 100;
    printf("ָ��:%p\n", &value);

    //�ַ�
    printf("�ַ�:%c\n", 0x33);

    //�ַ���
    printf("�ַ���:%s\n", "hello");

    //�ٷֺ�
    printf("�ٷֺ�:%%\n");

    //�˽�������ǰ����0
    printf("%#o\n", 123);

    //ʮ����������ǰ����0x��0X
    printf("ʮ����������ǰ����0x��0X\n", 123);
    printf("%#x\n", 123);
    printf("\n");	
    printf("%#X\n", 123);
	printf("ʮ����������ǰ����0x��0X\n", 123);//printf("\n");	
	
	
    //������һ��ʹ��С����
    printf("%.0f\n", 1.0);
    printf("%#.0f\n", 1.0);
   // system("pause");
    return 0;
}
