/************************************************************************/
/* ���ۣ�
	Memory�д洢���ǲ��룬�Ǹ��ݴ���ľ������ݵ�ֵ����ת��Ϊ������
	�����ʽ������������������ͷ�Χ��֪�������ʽ��ʲô�ˣ����
	Ӧ���Ǳ�������صģ���Խ�����Ĵ���ʽ�������۴����ʱ������ʲ
	ô���Ʊ�ʾ�ģ�������ע��+/-��Ŀ����������ã�
	����Ҫ��ʲô���㶼Ҫ�ȿ�����������ڴ���ʲô���ӵģ�
	��������/�ضϵ�ʱ���Ƕ��ڴ������ݵĲ�����������ʱ�������Ҫ
	������λ�����޷�������λ��ʱ��ֱ�Ӱ�������λ�ϲ��㼴��(��Ϊunsigned��������)���з���
	��������λ������з���λ��չ(sign extension)�����������ԭ���λ
	�������㣬����Ǹ�����ԭ���λ��1��ȫ��1;�������ݽضϵ�ʱ����
	�ӵ�λ��ʼ��λ��Ȼ��ضϣ�����ע������ʹ�õ�һ�㶼��С�˻�(little Endian)
	
	����ǿ��ת����ʵҲ�Ƕ��ڴ��д洢�����ݵ�һ�ֳ��ַ�ʽ���ѣ��磺�ڴ�
	����8000��ʱ��(��1000 0000 0000 0000)�������unsigned short int���ӡ��
	������2��15�η��������short int���ӡ�����Ǹ�2��16�η�
	
	�ڽ������������˫Ŀ��λ�����ʱ������������������Ͳ�һ�£����Ƚ�
	������ Arithmetical Conversion��������(��ʵ�������ǽ�����λ��Ȼ�����λ����ڴ�����ƴ���ǿ��תΪĳ����������֮����д�ӡ)��Ȼ��		�ſ�ʼ����
	
	�ڽ��е�Ŀλ�����ʱ�����Ƚ�������������Ȼ��ʼ����Integer Promotion*/
/************************************************************************/
#include <stdio.h>
void test00(void);
void test01(void);
void type_add(void);
void u8_2_u16(void);

int main()
{	
//	test00();
		
//	test01();
	
//	type_add();

	u8_2_u16();

    getchar();

    return 0;
}

void test00(void)
{

	printf("----------test00 start line----------\n");	
    char  ca;
    unsigned char ucb;
    unsigned short usc;
	
    ca = 128;
    ucb =128;
 
    usc = ca + ucb;
    printf("ca: %d\n", ca);
    printf("ucb: %d\n", ucb);
    printf("usc = ca + ucb %d\n", usc);/*0*/ 	/**/
    usc = ucb + ca;
	printf("usc = ucb + ca %d\n\n", usc);
	
    usc = ca + (short)ucb;
    printf("(short)ucb test:%d\n", (short)ucb) ;
    printf("test ca:%d\n", ca);    
    printf("%d\n\n", usc);/*0*/ 	/*-128 + 128 = 0 */ 
    
    usc = (unsigned char)ca + ucb;/*-128 ---> 128:����ǿ��ת��*/ 
    printf("(unsigned char)ca: %d\n", (unsigned char)ca);
    printf("ucb: %d\n", ucb);
    printf("(unsigned char)ca + ucb: %d\n\n", usc);/*256*/	/*1000 0000 + 1000 0000 = 1 0000 0000 // -> ������ת�� ����� 256*/ 

    usc = ca + (char)ucb;
    printf("ca: %d\n", ca);    
    printf("(char)ucb test:%d\n", (char)ucb) ;
	/*����ת�� 1000 0000 + 1000 0000 = 1 0000 0000 //  1 0000 0000 -> unsigned short �������� ��λ��1  1111 1111 0000 0000 B = 65280 D*/    
    printf("%d\n", usc);/*65280*/	
	printf("----------test00 end line----------\n\n");
}

void test01(void)
{
	printf("----------test01 start line----------\n");
	char c1 = 1;
	char c2 = -1;
	unsigned short uc16;
	short c16;
	
	c16 = c1;
	uc16 = c1;
	printf("c16��c1 = 1��= %d, uc16��c1 = 1��= %d\n\n ",c16,uc16);
	
	c16 = c2;
	uc16 = c2;
	printf("c16 (c2 = -1) = %d, uc16��c2 = -1��= %d\n\n ",c16,uc16);
	
	printf("c1 = %d, c2 = %d \n",c1,c2);
	printf("----------test01 end line----------\n\n");
	
}

void type_add(void)
{
	printf("----------type_add start line----------\n");	
	char c0 = 8;
	short c16 = 256;
	printf("c0 + c16 = %d\n",c0 + c16);
//	printf("c0 + c16 = \n");
	printf("----------type_add end line----------\n\n");	
}

void u8_2_u16(void)
{
	printf("----------u8_2_u16 start line----------\n");	
	unsigned char uc8 = 128;
	char c8 = 128;
	unsigned short uc16 = 0;
	
	uc16 = uc8;
	
	printf("uc8 = %d\n" ,  uc8);  
	printf("uc16 = %d\n", uc16);
	
	uc16 = c8;
	printf("c8 = %d\n" ,  c8);	
	printf("uc16 = %d\n", uc16);	
	
	printf("----------u8_2_u16 end line----------\n\n");	
}







