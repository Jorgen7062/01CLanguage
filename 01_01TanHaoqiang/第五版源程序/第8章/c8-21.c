#include <stdio.h>
int main()
{
	char *a="I love China!";
	//a=a+7;
	
	//*( a + 2 ) = 'w';	//error:不能修改字符串常量 
	//a[1] = 'A';			//error:不能修改字符串常量 
	
	printf("%s\n",a);
	return 0;
}
