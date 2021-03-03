/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int int_a;
	char char_b;
	char char_c;
	char char_d;
	char char_e;
	char char_f;
}struct_test_st;


/*Function*/
int main()
{
	struct_test_st struct_test_st_arrary[] = 
	{
		{
			.int_a  = 100,
			.char_b = 90,
			.char_c = 80,
			.char_d = 70,
			.char_e = 60		
		},
		{
			.int_a  = 101,
			.char_b = 91,
			.char_c = 81,
			.char_d = 71,
			.char_e = 61
		}			
	};
	
	printf("sizeof(struct_test_st_arrary) = %d\n", sizeof(struct_test_st_arrary)/sizeof(struct_test_st));
	printf("struct_test_st_arrary[0].int_a = %d\n", struct_test_st_arrary[0].int_a);
	printf("struct_test_st_arrary[0].char_b = %d\n", struct_test_st_arrary[0].char_b);
	printf("struct_test_st_arrary[0].char_c = %d\n", struct_test_st_arrary[0].char_c);	
	printf("struct_test_st_arrary[0].char_d = %d\n", struct_test_st_arrary[0].char_d);
	printf("\n");	
	printf("struct_test_st_arrary[1].int_a = %d\n", struct_test_st_arrary[1].int_a);
	printf("struct_test_st_arrary[1].char_b = %d\n", struct_test_st_arrary[1].char_b);
	printf("struct_test_st_arrary[1].char_c = %d\n", struct_test_st_arrary[1].char_c);	
	printf("struct_test_st_arrary[1].char_d = %d\n", struct_test_st_arrary[1].char_d);	
	

	printf("按回车键结束程序...\n");	
	getchar();

	return 0;
}




