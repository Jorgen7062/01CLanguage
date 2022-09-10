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
        unsigned char     char0    :1;
        unsigned char     char1    :1;
        unsigned char     char2    :1;
        unsigned char     char3    :1;
        unsigned char    char4    :1;
        unsigned char     char5    :1;
        unsigned char     char6    :1;
        unsigned char     char7    :1;
        unsigned char     char00  :1;
        unsigned char    char01  :1;
        unsigned char     char02  :1;
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

#define TEST_MODE_Mask 0xe000
#define TEST_MODE_1    0x2000
#define TEST_MODE_2    0x4000
#define TEST_MODE_slave_Jitter    0x6000
#define TEST_MODE_4    0x8000
#define TEST_MODE_5    0xa000

int snprintf_test () {
  char a[16] = {0};
  char b[16] = {0, 'A', 102, 3, 0, 0, 0, 7, 8, 9, 10, 11, 12};
  char * temp = a; 
  char buf[16] = {0};
  size_t i;

//  i = snprintf(a, 13, "%012d", 12345);  // 第 1 种情况
//  printf("i = %lu, a = %s\n", i, a);    // 输出：i = 12, a = 000000012345
/*
  i = snprintf(a, 9, "%012d", 12345);   // 第 2 种情况
  printf("i = %lu, a = %s\n", i, a);    // 输出：i = 12, a = 00000001
*/ 
//    i = snprintf(a, 2, "%2d", b);   // 第 2 种情况
//    printf("i = %d, a = %s\n", i, a);    // 输出：i = 12, a = 00000001
    
//    sprintf(buf, "%02x%02x%02x%02x%02x\n", temp[0], temp[1], temp[2], temp[3], temp[4]);
//    printf("02x:buf = %s", buf);
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", buf[i]);
//    }
//    printf("\n\n", buf[i]);
//
//    sprintf(buf, "%2x%2x%2x%2x%2x\n", temp[0], temp[1], temp[2], temp[3], temp[4]);
//    printf("2x:buf = %s", buf);
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d ", buf[i]);
//    }
//    printf("\n\n", buf[i]);
        
    sprintf(buf, "%c%x%x%x%x\n", temp[0], temp[1], temp[2], temp[3], temp[4]);
    printf("x:buf = %s\n", buf);
    for(i = 0; i < 10; i++)
    {
        printf("%d ", buf[i]);
    }
    printf("\n\n", buf[i]);
    
  return 0;
}

int test_three_point () {
    int status_id = 6;
    
    switch (status_id)
    {
        case 2u:
            {
                printf("%d\n", status_id);
                break;
            }
        case 1u:
            {
                printf("%d\n", status_id);
                break;
            }
        case 0u:
            {
                printf("%d\n", status_id);
                break;
            }
        case 4u ... 240u:
            {
                printf("... %d\n", status_id);
                break;
            }
        default:
                printf("%d\n", status_id);
                break;
    }
//数组批量赋相同值
    int table[7]={
    [3 ... 6]=7,
    [2] = 10
    };
    int i = 0;
    for(i=0;i<7;i++)
    {
        printf("\ntable[%d]=%d\n",i,table[i]);
    }

}

int strncmp_test(void)
{
    char *p="aBc";
    char *q="Abc";
    char *h="abc";
    char qq[]={1,2,0,2,3};
    char hh[]={1,2,2,1,4};

    printf("strncmp(qq,hh,4):%d\n",strncmp(qq,hh,5));
    //printf("strcmp(p,h):%d\n",strcmp(p,h));

    return 0;
    //结果：
    //strcmp(p,q):32
    //strcmp(p,h):-32
}


void Struct_Test(void)
{
    typedef struct 
    {
        int     int_a;
        char     char_a1;
        char     char_a2;
        char    char_a3;
        char     char_a4;
        //char     char_a;
        short     short_a;
    } ST_SIZE;
    
    ST_SIZE st1;
    UNION_ST Union_2 ;
    
//    Union_2.c_data[0] = 0x00;
//    Union_2.c_data[1] = 0xFF;

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
        char     char_a1;
        char     char_a2;
        char    char_a3;
        char     char_a4;
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
    printf("place of ch_array        %p\n", ch_array);
    printf("place of ch_array[0]        %p\n", ch_array[0]);
    printf("place of ch_array + 1        %p\n", ch_array+1);
    printf("place of ch_array[1] + 1    %p\n", ch_array[1]+1);
    
    printf("\nint_array[2][3]\n");
    printf("place of int_array        %p\n", int_array);
    printf("place of int_array[0]        %p\n", int_array[0]);
    printf("place of int_array + 1        %p\n", int_array+1);
    printf("place of int_array[1] + 1    %p\n", int_array[1]+1);

    return;
}

void Const_Test(void)
{
    const int a = 2018;
    int *p; // = (int *)&a;
//    p = &a;
    p = (int *)&a;
    *p = 2019;
    printf("%d\n",a);
//    a = 2020;
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
    int      int_a1,         int_a2,         int_a3;
    int      int_b1 = 1,     int_b2 = 2;
    int      int_p  = 100;
    char      char_a1 = -4;
    float     f_a1 = 25.0;
    int     array[2] = {1, 2};
    
    int_a1 = 0b1111;        //2进制赋值 
    int_a2 = 010;             //8进制赋值 1
//    int_a2 = '\123';         //8进制赋值 2   123 = 83 (8 + 2*8 + 3 = 83)
    int_a3 = 0x11;            //16进制赋值
    
    printf("这是二进制 0b101 用十进制表示的数值:%d\n",int_a1);
    printf("这是八进制 010 用十进制表示的数值:%d\n",int_a2);
    printf("这是十六进制 0x11 用十进制表示的数值:%d\n",int_a3);
    
    printf("\n （int_b1=int_b2）输出int_b2的值：  %d \n", int_b1 = int_b2);
        
    printf("\n8进制格式控制符\n");    
    printf("八进制整数前不加0 %%o %o\n", 123);
    printf("八进制整数前加上0 %%#o %#o\n", 123);

    printf("\n16进制格式控制符\n");
    printf("%%x：%x\n",int_a1);
    printf("%%X：%X\n",int_a1);
    printf("%%#x：%#x\n",int_a1);
    printf("%%#X：%#X\n",int_a1);

    printf("\n浮点数格式控制符\n");
    printf("%%f:%f\n",f_a1);
    printf("不显示不必要的 0 %%g:%g\n",f_a1);
    printf("%%#f:%#f\n",f_a1);
    printf("%%#g:%#g\n",f_a1);
    printf("%%x.yf  x位整数  y位小数 %2.2f\n", 1.08);
    printf("浮点数一定使用小数点%%#.0f  %#.0f\n", 1.08);

    printf("\n指针:%%p\n");
    printf("变量的地址 int_p 指针:%%p : %p\n",  int_p);
    printf("地址的地址&int_p 指针:%%p : %p\n", &int_p);
    printf("地址的地址&int_p 指针:%%d : %X\n", &int_p);
    printf("地址的地址array  指针:%%p : %p\n", array);
    printf("地址的地址array[0] 指针:%%p : %p\n", array[0]);
    
    printf("\n 无符号形式输出%%u : %u\n", char_a1);
    printf("\n 制表\\t *\t* 响铃\\a \a      回车\\r \r \n");
    printf("\n 百分号%%%% : %%\n");
    printf("\n 字符0x33 %%c: %c\n", 0x33);
    printf("\n 字符串:%%s %s\n", "hello");

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


#define P(A)         printf("%s:%d\n",#A,A);
#define P_char(A)     printf("%s\n",#A);
#define SQR(x)         printf("The square of "#x" is %d.\n", ((x)*(x)));
#define XNAME(n)     (x##n)
#define _P_char(A)    P_char(A)

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

    printf("\n%s\n", g(    f(1,2)    )    );      //#  f(1,2)
    printf("%s\n", g(  ( f(1,2) )  )    );      //#( f(1,2) )    
    printf("%s\n", h(    f(1,2)    )    );      //1##2         -->     #(1##2)
    
//    printf("%s:%d\n",#a,a); //非法 
//    printf("%s\n", #a);        //非法
//    system("pause");
}

/*函数局部变量返回测试  局部变量  VS 局部变量指针*/ 
int * Return_P_Test(void)
{    
    int int_a = 2020;
    int * int_ap;

    int_ap = &int_a;

    printf("可以通过 *指针变量* 返回 *局部变量* 的地址\n");
    printf("不可以直接返回 *局部变量* &（变量） 的地址\n");
    //return int_a;
    //return int_ap;
    //return &int_a;
} 

void DataType_Conversion(void)
{
    char             char_a = -18,        char_b = 18;
    unsigned char     uchar_a = -19,         uchar_b = 19;
    short             short_a = -17,        short_b = 17;
    
    printf("char_a = -18    %#x\n",    char_a);
    printf("char_b = 18     %#x\n",    char_b);
    
    printf("\nuchar_a = -19    %#x\n",    uchar_a);
    printf("uchar_b = 19     %#x\n",    uchar_b);
        
    printf("\nshort_a  = -17    %#x\n",    short_a);
    printf("short_b  =  17    %#x\n",    short_b);

    uchar_a = short_a;
    printf("\nuchar_a = short_a;    %#d\n",    uchar_a);

    char_a  = short_a;
    printf("\nchar_a  = short_a;    %#d\n",    char_a);

    return;
}


/*Tips
string.h(C)或cstring(C++) 给定字符串（不包括“\0”）长度
size_t strlen(const char *string);

strlen VS sizeof
run this program using the console pauser or add your own getch, system("pause") or input loop
*/
void ShortArrary_2_CharArrary(void) 
{
    short short_arrary[4] = {0x1011,     0x2233,     0x4455,     0x6677};
    char  char_arrary[4]  = {0xAA,         0xBB,        0xCC};
//    这种赋值方式不正确，之后执行到包含该指针的语句时，程序会断开
    char  * char_arrary_p = {0xAA,         0xBB,        0xCC,    0xDD,    0x00};
    char  * char_arrary_q;
    int   * int_p;

//    printf("sizeof char_arrary_p[0] = %d\n",    *char_arrary_p);    //不能通过这种方式来输出值
    printf("sizeof char_arrary_p[1] = %d\n",    char_arrary_p[1]);    //不能通过这种方式来输出值

    printf("sizeof short_arrary[4] = %d\n",    sizeof(short_arrary));     //out 8
    printf("sizeof char_arrary[4]  = %d\n",    sizeof(char_arrary));     //out 4
//    printf("sizeof char_arrary_p   = %d\n",    sizeof(char_arrary_p));
    printf("sizeof char_arrary_q   = %d\n",    sizeof(char_arrary_q)); //out 8
    printf("sizeof int_p   = %d\n",            sizeof(int_p));         //out 8
    printf("\n");
    printf("strlen以\\0之前的字节数\n");
    printf("strlen short_arrary[4] = %d\n",    strlen(short_arrary));    //此处有警告 size_t strlen(const char *string);
    printf("strlen char_arrary[4]  = %d\n",    strlen(char_arrary));    //out 3
//    printf("strlen char_arrary_p   = %d\n",    strlen(char_arrary_p));    //out 3
//    printf("strlen char_arrary_q   = %d\n",    strlen(char_arrary_q));    //该语句中断以下程序的执行 
//    printf("strlen int_p              = %d\n",    strlen(int_p));            //该语句中断以下程序的执行    此处有警告 size_t strlen(const char *string);
    printf("\n");
    printf("((char*) short_arrary)[1] : %#x    %p\n",        ((char*) short_arrary)[1], &((char*) short_arrary)[1]);    //out: ox0  (little endian) 
    printf("((char*) short_arrary)[0] : %#x    %p\n",        ((char*) short_arrary)[0], &((char*) short_arrary)[0]);    //out: ox11  (little endian) 
    printf("*(&((char *)&short_arrary[0])[7]) : %#x\n",    *(&((char *)&short_arrary[0])[7]));                     //out: ox66 

    return;
}

void Null_Test(void)
{
    char *p = NULL;
    char char_temp; 
    
    char_temp = *p;                             //对0地址直接读取数据中断了当前程序的执行 
    
    printf("变量的地址 p 指针:%%p : %p\n",  p);
    
    printf("Location 0 contains %d\n", *p);        //没有打印该地址的数据 
    
    printf("char_temp = *p; %d\n", char_temp);
    
    return;
}

void Setjmp_Test(void)
{
    switch(setjmp(jmp_buf_a0))    /*setjmp(jmp_buf_a0) 执行后，返回值为 0 */
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
    
    longjmp(jmp_buf_a0, 2);    /*参数x 为longjmp(jmp_buf_a0, x); 返回参数     返回 setjmp(jmp_buf_a0) 处*/
    
    printf("in Longjmp_Test(void) After longjmp(jmp_buf_a0, 1);\n");    /*该行不会被执行*/

    return;
}

/*Function*/
int main()
{
//    Struct_Test();
//    Array_Test();
//    Sharp_Test();
//    FormatEffector_Test();
//    Const_Test();
    
//    int * p_int_a;
//    p_int_a = Return_P_Test();
//    printf("*p_int_a = %d\n", *p_int_a);
//    ShortArrary_2_CharArrary(); 
//    Null_Test();

//    Setjmp_Test();

//    printf("Hello Word!\n");

//     snprintf_test();
//     test_three_point();
    printf("按回车键结束程序...\n");
    getchar();

    return 0;
}



