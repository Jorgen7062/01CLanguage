//file1.c
#include <stdio.h>
int main()
{ 
	extern void enter_string(char str[]);
  	extern void delete_string(char str[],char ch);
  	extern void print_string(char str[]);
    // 以上3行声明在本函数中将要调用的已在其他文件中定义的3个函数
  
  	char c,str[80];
  	int i = 0;
  	

  	
  	printf("test\n"); 
  	//str[3] = 0;
  	print_string(str);
  	
  	if(0 == '\0')
  	{
  		printf("0 == \0");
 	}
 	
	for(i = 0; i < 80; i ++)
  	{
  		//if(str[i] == 0)	
	} 
  	
  	enter_string(str);                 // 调用在其他文件中定义的enter_string函数
  	
	printf("please input a char will deleted \n");
	scanf("%c",&c);
  	
  	delete_string(str,c);               // 调用在其他文件中定义的delete_string函数 
  	print_string(str);                  // 调用在其他文件中定义的print_string函数  
	 
	   
  	return 0;     
}
