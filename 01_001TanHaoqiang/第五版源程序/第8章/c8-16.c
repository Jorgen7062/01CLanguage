#include <stdio.h>
#include <string.h>
int main()
{
	char string[]="I love China!"; 
	
	//string[13] = 'W';       
	
	printf("%s\n",string);                    // ��%s���string��������������ַ���
	
	printf("sizeof(string) = %d\n",sizeof(string)); 	//14
	printf("strlen(string) = %d\n",strlen(string));   	//13
		
	printf("%c\n",string[7]);
	
	//printf(" string[14] = %c\n",string[14]);
	
	return 0;
}

