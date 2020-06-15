#include <stdio.h>
/*强制类型转换运算符的优先级大于除法，因此 sum 的值首先被转换为 double 型，然后除以 count，得到一个类型为 double 的值。*/ 
int main()
{
	int sum = 17, count = 5;
	double mean;
	
	mean = (double) sum / count;
	printf("Value of mean : %f\n", mean );	
	
	mean = (double) (sum / count);
	printf("Value of mean : %f\n", mean );
}
