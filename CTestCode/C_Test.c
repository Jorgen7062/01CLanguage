/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

/*Global Variables*/ 
jmp_buf jmp_buf_a0;

typedef union
{
	unsigned char c_data[2];
	struct struct_union
	{
		unsigned char 	char0	:1;
		unsigned char 	char1	:1;		
		unsigned char 	char2	:1;
		unsigned char 	char3	:1;
		unsigned char	char4	:1;
		unsigned char 	char5	:1;
		unsigned char 	char6	:1;		
		unsigned char 	char7	:1;
		unsigned char 	char00  :1;
		unsigned char	char01  :1;
		unsigned char 	char02  :1;			
	}struct_union;	
}UNION_ST;

UNION_ST Union_1 ;

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
void Null_Test(void);
 
void Setjmp_Test(void);
void Longjmp_Test(void); 




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
	ShortArrary_2_CharArrary(); 
//	Null_Test();

//	Setjmp_Test();
	 	
//	printf("Hello Word!\n");
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
		//char 	char_a;
		short 	short_a;	
	} ST_SIZE;
	
	ST_SIZE st1;
	UNION_ST Union_2 ;
	
//	Union_2.c_data[0] = 0x00;
//	Union_2.c_data[1] = 0xFF;

	printf("Union_1.c_data[0] = %d\n",Union_1.c_data[0]);
	printf("Union_1.c_data[1] = %d\n\n",Union_1.c_data[1]);
		
	printf("Union_2.c_data[0] = %d\n",Union_2.c_data[0]);
	printf("Union_2.c_data[1] = %d\n\n",Union_2.c_data[1]);
	
	Union_1.struct_union.char0 = 1;
	
	printf("size of st1 = %d\n",sizeof(st1));	
	printf("Union_1.c_data[0] = %d\n",Union_1.c_data[0]);		
	printf("Union_1.c_data[1] = %d\n",Union_1.c_data[1]);
}

void Array_Test(void)
{
	char sub_value = 0;
	typedef struct 
	{	
		char 	char_a1;
		char 	char_a2;
		char	char_a3;
		char 	char_a4;

					
	} ST_SIZE;
	
	ST_SIZE array[8];
	ST_SIZE * array_0 = &array[0];
	ST_SIZE * array_4 = &array[2];
	
	sub_value = (char)(array_4 - array_0);
	
	char ch_array[2][3] = {1,2,3,4,5,6};
	int  int_array[2][3] = {7,8,9,10,11,12};
	
	printf("***********array_0 = %p\n\n", array_0);
	printf("***********array_4 = %p\n\n", array_4);
	printf("***********sub_value = %d\n\n", sub_value);
	
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
	short short_arrary[4] = {0x1011, 	0x2233, 	0x4455, 	0x6677};
	char  char_arrary[4]  = {0xAA, 		0xBB,		0xCC};
	char  * char_arrary_p = {0xAA, 		0xBB,		0xCC,	0xDD,	0x00};  //��ʼ��ָ��ʱ����ֱ�Ӷ�ָ�븳����ֵ�� ������Ԫ��ֵ��//{0xAA, 		0xBB,		0xCC,	0xDD,	0xEE}; //�˴��о��棬 
	char  * char_arrary_q;
	int   * int_p;

	printf("sizeof short_arrary[4] = %d\n",	sizeof(short_arrary)); 	//out 8
	printf("sizeof char_arrary[4]  = %d\n",	sizeof(char_arrary)); 	//out 4
	printf("sizeof char_arrary_p   = %d\n",	sizeof(char_arrary_p)); //out 8
	printf("sizeof char_arrary_q   = %d\n",	sizeof(char_arrary_q)); //out 8
	printf("sizeof int_p   = %d\n",			sizeof(int_p)); 		//out 8	
	printf("\n");
	printf("strlen��\\0֮ǰ���ֽ���\n");
	printf("strlen short_arrary[4] = %d\n",	strlen(short_arrary));	//�˴��о��� size_t strlen(const char *string);
	printf("strlen char_arrary[4]  = %d\n",	strlen(char_arrary));	//out 3	
	printf("strlen char_arrary_p   = %d\n",	strlen(char_arrary_p));	//out 3
	printf("strlen char_arrary_q   = %d\n",	strlen(char_arrary_q));	//out 3	
	printf("strlen int_p   		   = %d\n",	strlen(int_p));			//out 3	
	printf("\n");
	printf("\n((char*) short_arrary)[1] : %#x	%p\n",		((char*) short_arrary)[1], &((char*) short_arrary)[1]);	//out: ox0  (little endian) 
	printf("((char*) short_arrary)[0] : %#x		%p\n",		((char*) short_arrary)[0], &((char*) short_arrary)[0]);	//out: ox11  (little endian) 
	printf("*(&((char *)&short_arrary[0])[7]) : %#x\n",		*(&((char *)&short_arrary[0])[7])); //out: ox66 

	return;
}

void Null_Test(void)
{
	char *p = NULL;
	char char_temp; 
	
	char_temp = *p; 							//��0��ֱַ�Ӷ�ȡ�����ж��˵�ǰ�����ִ�� 
	
	printf("�����ĵ�ַ p ָ��:%%p : %p\n",  p);
	
	printf("Location 0 contains %d\n", *p);		//û�д�ӡ�õ�ַ������ 
	
	printf("char_temp = *p; %d\n", char_temp);
	
	return;
}

void Setjmp_Test(void)
{
	switch(setjmp(jmp_buf_a0))	/*setjmp(jmp_buf_a0) ִ�к󣬷���ֵΪ 0 */
	{
		case 0:
			printf("in Setjmp_Test(void)  setjmp(jmp_buf_a0) == 0;\n");
			Longjmp_Test();		
			break;
			
		case 1:
			printf("in Setjmp_Test(void)  setjmp(jmp_buf_a0) == 1;\n");
			break;
			
		case 2:
			printf("in Setjmp_Test(void)  setjmp(jmp_buf_a0) == 2;\n");
			break;
		
		default:
			printf("in Setjmp_Test(void)  setjmp(jmp_buf_a0) == default;\n");
			break;	
	}
	
	return;
} 

void Longjmp_Test(void)
{
	printf("in Longjmp_Test(void) Before longjmp(jmp_buf_a0, 1);\n");
	
	longjmp(jmp_buf_a0, 2);	/*����x Ϊlongjmp(jmp_buf_a0, x); ���ز���     ���� setjmp(jmp_buf_a0) ��*/ 
	
	printf("in Longjmp_Test(void) After longjmp(jmp_buf_a0, 1);\n");	/*���в��ᱻִ��*/ 
	
	return;
}





