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
枚举类型成员变量 的值在 预编译阶段 无效

宏定义：预编译阶段，还不能检测枚举成员类型的值 

枚举类型：编译阶段			
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
	int a1, a2, a3;
	float b;
	
	a1 = 0b101;		//OK  二进制赋值 
//	a2 = 010; 		//8 octal   int  = 8
	a2 = '\123'; 	//8 octal   123 = 83 (8 + 2*8 + 3 = 83)	
	a3 = 0x11;
	
		
	b = 25.5;

	printf("这是二进制 0b101 用十进制表示的数值:%d\n",a1);
	printf("这是八进制 010 用十进制表示的数值:%d\n",a2);
	printf("这是十六进制 0x11 用十进制表示的数值:%d\n",a3);	
	printf("b = %%f %f\n",b);
	printf("b = %%g %g\n",b);	//%g：不显示不必要的 0 


//	printf("a = %u\n",a); //u无符号形式输出 


//	printf("%d\noooooooo\tbbb\a\rcccc", a=b);
	printf("%d  abc\n",377);

	return;
}

/*
补码 反码 原码 
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
#define h(a) g(a)  /*此宏定义中，无“# ”运算符在其中，故  h(    f(1,2)    ) 中，f(1,2)先执行，之后再执行其运算结果  #12*/ 

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
	
//	printf("%s:%d\n",#a,a); //非法 
//	printf("%s\n", #a);		//非法	
	system("pause");
}




