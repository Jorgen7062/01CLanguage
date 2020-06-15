/************************************************************************/
/* 结论：
	Memory中存储的是补码，是根据存入的具体数据的值进行转换为二进制
	后的形式，如果超过该数据类型范围则不知道存的形式是什么了，这个
	应该是编译器相关的，对越界数的处理方式；（无论存入的时候是用什
	么进制表示的，在这里注意+/-单目运算符的作用）
	无论要做什么运算都要先看这个数存入内存是什么样子的；
	类型提升/截断的时候都是对内存中数据的操作，提升的时候就是需要
	进行扩位：对无符号数扩位的时候直接把扩出的位上补零即可(因为unsigned都是正数)；有符号
	数进行扩位，则进行符号位扩展(sign extension)如果是整数即原最高位
	是零则补零，如果是负数即原最高位是1则全补1;进行数据截断的时候是
	从低位开始数位数然后截断，这里注意我们使用的一般都是小端机(little Endian)
	
	类型强制转换其实也是对内存中存储的数据的一种呈现方式而已，如：内存
	中是8000的时候(即1000 0000 0000 0000)，如果用unsigned short int则打印出
	来的是2的15次方，如果用short int则打印出来是负2的16次方
	
	在进行算术运算和双目的位运算的时候如果操作数数据类型不一致，首先进
	行数据 Arithmetical Conversion类型提升(其实提升就是进行扩位，然后把扩位后的内存二进制代码强制转为某种数据类型之后进行打印)，然后		才开始运算
	
	在进行单目位运算的时候，首先进行整型提升，然后开始运算Integer Promotion*/
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
    
    usc = (unsigned char)ca + ucb;/*-128 ---> 128:类型强制转换*/ 
    printf("(unsigned char)ca: %d\n", (unsigned char)ca);
    printf("ucb: %d\n", ucb);
    printf("(unsigned char)ca + ucb: %d\n\n", usc);/*256*/	/*1000 0000 + 1000 0000 = 1 0000 0000 // -> 无码型转换 遂等于 256*/ 

    usc = ca + (char)ucb;
    printf("ca: %d\n", ca);    
    printf("(char)ucb test:%d\n", (char)ucb) ;
	/*类型转换 1000 0000 + 1000 0000 = 1 0000 0000 //  1 0000 0000 -> unsigned short 整形提升 高位补1  1111 1111 0000 0000 B = 65280 D*/    
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
	printf("c16（c1 = 1）= %d, uc16（c1 = 1）= %d\n\n ",c16,uc16);
	
	c16 = c2;
	uc16 = c2;
	printf("c16 (c2 = -1) = %d, uc16（c2 = -1）= %d\n\n ",c16,uc16);
	
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







