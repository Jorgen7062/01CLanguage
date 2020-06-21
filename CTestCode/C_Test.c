/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Function Declaration*/
void Struct_Test(void); 
void Array_Test(void);
void Const_Test(void);
void Macro_vs_Enum(void);
void FormatEffector_Test(void);
void ComplementalCode_Test(void);
void Sharp_Test(void);
int * Return_P_Test(void);
void DataType_Conversion(void);
void ShortArrary_2_CharArrary(void); 

/*Function*/
int main()
{
//	Struct_Test();
//	Array_Test();
//	Sharp_Test();
//	FormatEffector_Test();
//	Const_Test();
	
//	int * p_int_a;
//	p_int_a = Return_P_Test();
//	printf("*p_int_a = %d\n", *p_int_a);
	
	printf("Hello Word!\n");
	printf("���س�����������...\n");	
	getchar();

	return 0;
}

void Struct_Test(void)
{
	typedef struct 
	{
		int 	int_a;		
		char 	char_a1;
		char 	char_a2;
		char	char_a3;
		char 	char_a4;		
		short 	short_a;	
	} ST_SIZE;
	
	ST_SIZE st1;
	
	printf("size of st1 = %d",sizeof(st1));		
}

void Array_Test(void)
{
	char ch_array[2][3] = {1,2,3,4,5,6};
	int  int_array[2][3] = {7,8,9,10,11,12};
	
	printf("ch_array[2][3]\n");
	printf("place of ch_array		%p\n", ch_array);
	printf("place of ch_array[0]		%p\n", ch_array[0]);	
	printf("place of ch_array + 1		%p\n", ch_array+1);
	printf("place of ch_array[1] + 1	%p\n", ch_array[1]+1);
	
	printf("\nint_array[2][3]\n");
	printf("place of int_array		%p\n", int_array);
	printf("place of int_array[0]		%p\n", int_array[0]);	
	printf("place of int_array + 1		%p\n", int_array+1);
	printf("place of int_array[1] + 1	%p\n", int_array[1]+1);
	
	return;			
}

void Const_Test(void)
{
	const int a = 2018;
	int *p; // = (int *)&a;
//	p = &a;
	p = (int *)&a;
	*p = 2019;
	printf("%d\n",a);
//	a = 2020;
	printf("%d\n",a);
		
	return;
}

/*****************************************	
ö�����ͳ�Ա���� ��ֵ�� Ԥ����׶� ��Ч

�궨�壺Ԥ����׶Σ������ܼ��ö�ٳ�Ա���͵�ֵ 

ö�����ͣ�����׶�			
******************************************/
void Macro_vs_Enum(void)
{
	enum
	{
		test00,
		test01
	};	
	
	//#define   0
	//#define   1
	#define Macro test01
	
	#if(test00 == 0)
		printf("enmu.test00 == 0\n");
	#endif
	
	#if(test01 == 0)
		printf("enmu.test01 == 0\n");
	#endif
		
	#if(Macro == test00)
		printf("Macro == test00\n"); 
	#endif	
	
	#if(Macro == test01)
		printf("Macro == test01\n");  
	#endif
	
	#if(test00 == test01)
		printf("test00 == test01\n");  
	#endif
	
	return;
}


void FormatEffector_Test(void)
{
	int  	int_a1, 		int_a2, 		int_a3;
	int  	int_b1 = 1, 	int_b2 = 2;
	int  	int_p  = 100;
	char  	char_a1 = -4;
	float 	f_a1 = 25.0;
	
	int_a1 = 0b1111;		//2���Ƹ�ֵ 
	int_a2 = 010; 			//8���Ƹ�ֵ 1
//	int_a2 = '\123'; 		//8���Ƹ�ֵ 2   123 = 83 (8 + 2*8 + 3 = 83)	
	int_a3 = 0x11;			//16���Ƹ�ֵ
	
	printf("���Ƕ����� 0b101 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a1);
	printf("���ǰ˽��� 010 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a2);
	printf("����ʮ������ 0x11 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a3);
	
	printf("\n ��int_b1=int_b2�����int_b2��ֵ��  %d \n", int_b1 = int_b2);
		
	printf("\n8���Ƹ�ʽ���Ʒ�\n");	
	printf("�˽�������ǰ����0 %%o %o\n", 123);
    printf("�˽�������ǰ����0 %%#o %#o\n", 123);

	printf("\n16���Ƹ�ʽ���Ʒ�\n");
	printf("%%x��%x\n",int_a1);		
	printf("%%X��%X\n",int_a1);
	printf("%%#x��%#x\n",int_a1);		
	printf("%%#X��%#X\n",int_a1);	

	printf("\n��������ʽ���Ʒ�\n");	
	printf("%%f:%f\n",f_a1);
	printf("����ʾ����Ҫ�� 0 %%g:%g\n",f_a1);
	printf("%%#f:%#f\n",f_a1);
	printf("%%#g:%#g\n",f_a1);		
    printf("%%x.yf  xλ����  yλС�� %2.2f\n", 1.08);
    printf("������һ��ʹ��С����%%#.0f  %#.0f\n", 1.08);

    printf("\nָ��:%%p\n");
    printf("�����ĵ�ַ int_p ָ��:%%p : %p\n",  int_p);	
    printf("��ַ�ĵ�ַ&int_p ָ��:%%p : %p\n", &int_p);	
    
    printf("\n �޷�����ʽ���%%u : %u\n", char_a1);
	printf("\n �Ʊ�\\t *\t* ����\\a \a  	�س�\\r \r \n");
    printf("\n �ٷֺ�%%%% : %%\n");
    printf("\n �ַ�0x33 %%c: %c\n", 0x33);
    printf("\n �ַ���:%%s %s\n", "hello");

	return;
}

/*
���� ���� ԭ�� 
*/
void ComplementalCode_Test(void)
{
	char c1 = -12;
	unsigned char uc1 = 0;
	
	printf("c1 = %d\t,uc1 = %d\n\n",c1,uc1) ;
	
	uc1 = c1;
	printf("uc1 = c1;\n\n") ;
	
	printf("c1 = %d\t,uc1 = %d\n",c1,uc1);
	
	getchar();
}


#define P(A) 		printf("%s:%d\n",#A,A);
#define P_char(A) 	printf("%s\n",#A);
#define SQR(x) 		printf("The square of "#x" is %d.\n", ((x)*(x)));
#define XNAME(n) 	(x##n)
#define _P_char(A)	P_char(A)

#define f(x,y) x##y 
#define g(a) #a  
#define h(a) g(a)  /*�˺궨���У��ޡ�# ������������У���  h(    f(1,2)    ) �У�f(1,2)��ִ�У�֮����ִ����������  #12*/ 

void Sharp_Test(void)
{
	int a = 1, b = 2;
	P(a);
	P(b);
	P(a+b);
	
	P_char(a);
	P_char(XNAME(5));
	_P_char(XNAME(5));
		
	SQR(8);

	printf("\n%s\n", g(    f(1,2)    )    );  	//#  f(1,2)
	printf("%s\n", g(  ( f(1,2) )  )    );  	//#( f(1,2) )	
	printf("%s\n", h(    f(1,2)    )    );  	//1##2	 	--> 	#(1##2)
	
//	printf("%s:%d\n",#a,a); //�Ƿ� 
//	printf("%s\n", #a);		//�Ƿ�	
//	system("pause");
}

/*�����ֲ��������ز���  �ֲ�����  VS �ֲ�����ָ��*/ 
int * Return_P_Test(void)
{	
	int int_a = 2020;
	int * int_ap;
	
	int_ap = &int_a;
	
	printf("����ͨ�� *ָ�����* ���� *�ֲ�����* �ĵ�ַ\n");
	printf("������ֱ�ӷ��� *�ֲ�����* &�������� �ĵ�ַ\n");
	//return int_a;
	//return int_ap;
	//return &int_a;
} 

void DataType_Conversion(void)
{
	char 			char_a = -18,		char_b = 18;
	unsigned char 	uchar_a = -19, 		uchar_b = 19;
	short 			short_a = -17,		short_b = 17;
	
	printf("char_a = -18	%#x\n",	char_a);
	printf("char_b = 18 	%#x\n",	char_b);
	
	printf("\nuchar_a = -19	%#x\n",	uchar_a);
	printf("uchar_b = 19 	%#x\n",	uchar_b);
		
	printf("\nshort_a  = -17	%#x\n",	short_a);
	printf("short_b  =  17	%#x\n",	short_b);	

	uchar_a = short_a;
	printf("\nuchar_a = short_a;	%#d\n",	uchar_a);	
	
	char_a  = short_a;
	printf("\nchar_a  = short_a;	%#d\n",	char_a);
	
	return;	
}


/*Tips
string.h(C)��cstring(C++) �����ַ�������������\0��������
size_t strlen(const char *string);

strlen VS sizeof
run this program using the console pauser or add your own getch, system("pause") or input loop
*/
void ShortArrary_2_CharArrary(void) 
{
	//int int_arrary[8] = {0};
	short short_arrary[4] = {0x1011, 	0x2233, 	0x4455, 	0x6677};
	char  char_arrary[4]  = {0xAA, 		0xBB,		0xCC,		0xDD};

	printf("short_arrary[4] = {0x0011, 	0x2233, 	0x4455, 	0x6677};\n");
	printf("char_arrary[4]  = {0xAA, 	0xBB,		0xCC};		\n\n");

	printf("sizeof short_arrary[4]  = %d\n",		sizeof(short_arrary)); 	//out 8
	printf("sizeof char_arrary[4]   = %d\n",	sizeof(char_arrary)); 	//out 4

	//printf("\nstrlen short_arrary[4] 	= %d\n",	strlen(short_arrary));	//�˴��о��� size_t strlen(const char *string);
	printf("strlen char_arrary[4]    = %d\n",	strlen(char_arrary));	//out 3

	printf("\n((char*) short_arrary)[1] : %#x		%p\n",		((char*) short_arrary)[1], &((char*) short_arrary)[1]);	//out: ox0  (little endian) 
	printf("((char*) short_arrary)[0] : %#x		%p\n",		((char*) short_arrary)[0], &((char*) short_arrary)[0]);	//out: ox11  (little endian) 

	printf("*(&((char *)&short_arrary[0])[7]) : %#x\n",*(&((char *)&short_arrary[0])[7])); //out: ox66 

	return;
}

