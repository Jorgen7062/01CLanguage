/*tips
string.h(C)或cstring(C++) 给定字符串（不包括“\0”）长度
size_t strlen(const char *string);

short_arrary 2 char_arrary
strlen VS sizeof
*/
 
/*log
jwang 2019年11月6日21:20:56
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	//int int_arrary[8] = {0};
	short short_arrary[4] = {0x1100,0x2233,0x5544,0x7766};
	char  char_arrary [4] = {0x22,0x33,0x44};
	
	printf("short_arrary[4] = {0x1100,0x2233,0x5544,0x7766};\n");
	printf("char_arrary [4] = {0x22,0x33,0x44};\n\n");
	
	printf("sizeof short_arrary[4] = %d\n",sizeof(short_arrary)); //out 8
	
	printf("strlen char_arrary[4] = %d\n",strlen(char_arrary));	//out 3
	
	printf("((char*) short_arrary)[1] : %#x\n",((char*) short_arrary)[1]);	//out: ox11  (little endian) 
	
	printf("((char*) short_arrary)[0] : %#x\n",((char*) short_arrary)[0]);	//out: ox0  (little endian) 
	
	printf("*(&((char *)&short_arrary[0])[7]) : %#x\n",*(&((char *)&short_arrary[0])[7])); //out: ox77 
	
	system("pause"); 
	
	return 0;
}
