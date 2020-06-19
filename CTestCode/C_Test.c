#include <stdio.h>

void Struct_Test(void); 
void Array_Test(void);
void Const_Test(void);
void Macro_vs_Enum(void);
void FormatEffector_Test(void);
void ComplementalCode_Test(void);
void Sharp_Test(void);


int main()
{
	//Struct_Test();
	//Array_Test();
	//Sharp_Test();
	FormatEffector_Test();
	
	return 0;
}

void Struct_Test(void)
{
	typedef struct 
	{
		int 	i;		
		char 	c;
		char 	c2;
		char	c3;
		char 	c4;		
		short 	s;	
	} ST_SIZE;
	
	ST_SIZE st1;
	
	printf("size of st1 = %d",sizeof(st1));		
}

void Array_Test(void)
{
	char buf[8] = {0,1,2,3,4,5,6,7};
	int i = 0;
	char temp;
	//for()
	
	temp = buf[i++];
	printf("buf[i ++] = %d\n",temp);
	/*
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	printf("buf[i ++] = %d\n",buf[i++]);
	*/		
}

void Const_Test(void)
{
	const int a = 2018;
	int *p = (int *)&a;
//	p = (int *)&a;
	*p = 2019;
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
	int int_a1, int_a2, int_a3;
	int int_b1 = 1, int_b2 = 1;
	
	char char_a1 = -4;
	
	float f_b1;
	
	int_a1 = 0b1111;		//2���Ƹ�ֵ 
	int_a2 = 010; 			//8���Ƹ�ֵ 1
//	int_a2 = '\123'; 		//8���Ƹ�ֵ 2   123 = 83 (8 + 2*8 + 3 = 83)	
	int_a3 = 0x11;			//16���Ƹ�ֵ

	f_b1 = 25.5;
	
	printf("���Ƕ����� 0b101 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a1);
	printf("���ǰ˽��� 010 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a2);
	printf("����ʮ������ 0x11 ��ʮ���Ʊ�ʾ����ֵ:%d\n",int_a3);	
	printf("\n");
	printf("16���Ƹ�ʽ���Ʒ�\n");
	printf("%%x��%x\n",int_a1);		
	printf("%%X��%X\n",int_a1);
	printf("%%#x��%#x\n",int_a1);		
	printf("%%#X��%#X\n",int_a1);	
	printf("\n");
	printf("��������ʽ���Ʒ�\n");	
	printf("%%f:%f\n",f_b1);
	printf("%%g:%g\n",f_b1);	//%g������ʾ����Ҫ�� 0 
	printf("\n");
	printf("%%u:%u\n",char_a1); //u�޷�����ʽ��� 
	printf("\n");
	printf("%d aaa \t bbb \a ccc \r", int_b1=int_b1);
	printf("\n");

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




