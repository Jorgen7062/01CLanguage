/*Head File*/
/*测试结构体嵌套定义后，数值赋值顺寻*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char char_b;
	char char_c;
	char char_d;
	char char_e;
}struct_minor_st;

typedef struct
{
	int int_a;
	struct_minor_st struct_minor_st_a;
}struct_test_st;


/*Function*/
int main()
{
	struct_test_st struct_test_st_arrary =
	{ 100,	{101,	102,	103,	104}};
	
	
	
	
//	{100,	{101,	102,	103,	104}};
	
	
	
	
	
	
/*	{100,	101,	102,	103,	104};
	{
	
		{	
			100,
		}, 
		
		{		
			101,
			102,
			103,
			104,
		}
	};
*/	
	printf("sizeof(struct_test_st_arrary) = %d\n", sizeof(struct_test_st_arrary)/sizeof(struct_test_st));
	printf("struct_test_st_arrary[0].int_a = %d\n", struct_test_st_arrary.int_a);
	printf("struct_test_st_arrary[0].char_b = %d\n", struct_test_st_arrary.struct_minor_st_a.char_b);
	printf("struct_test_st_arrary[0].char_c = %d\n", struct_test_st_arrary.struct_minor_st_a.char_c);	
	printf("struct_test_st_arrary[0].char_d = %d\n", struct_test_st_arrary.struct_minor_st_a.char_d);
	printf("struct_test_st_arrary[0].char_e = %d\n", struct_test_st_arrary.struct_minor_st_a.char_e);
	
	printf("\n");
	
	printf("按回车键结束程序...\n");	
	getchar();

	return 0;
}




