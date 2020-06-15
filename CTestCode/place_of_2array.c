/*二维数组地址关系*/
/*jwang 2019年11月6日21:04:10*/

#include "stdio.h"

int main()
{
	char ch_array[2][3] = {1,2,3,4,5,6};
	int  int_array[2][3] = {7,8,9,10,11,12};
	
	printf("ch_array[2][3]\n");
	printf("place of ch_array = %p\n",ch_array);
	printf("place of ch_array[0] = %p\n",ch_array[0]);	
	printf("place of ch_array + 1 = %p\n",ch_array+1);
	printf("place of ch_array[1] + 1 = %p\n",ch_array[1]+1);
	
	printf("int_array[2][3]\n");
	printf("place of int_array = %p\n",int_array);
	printf("place of int_array[0] = %p\n",int_array[0]);	
	printf("place of int_array + 1 = %p\n",int_array+1);
	printf("place of int_array[1] + 1 = %p\n",int_array[1]+1);
		
}

