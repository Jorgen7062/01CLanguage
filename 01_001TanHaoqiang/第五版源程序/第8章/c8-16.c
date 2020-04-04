#include <stdio.h>
#include <string.h>
int main()
{
	char string[]="I love China!"; 
	
	//string[13] = 'W';       
	
	printf("%s\n",string);                    // 用%s输出string，可以输出整个字符串
	
	printf("sizeof(string) = %d\n",sizeof(string)); 	//14
	printf("strlen(string) = %d\n",strlen(string));   	//13
		
	printf("%c\n",string[7]);
	
	//printf(" string[14] = %c\n",string[14]);
	
	return 0;
}

