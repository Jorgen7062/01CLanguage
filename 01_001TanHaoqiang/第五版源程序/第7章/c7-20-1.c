//file1.c
#include <stdio.h>
int main()
{ 
	extern void enter_string(char str[]);
  	extern void delete_string(char str[],char ch);
  	extern void print_string(char str[]);
    // ����3�������ڱ������н�Ҫ���õ����������ļ��ж����3������
  
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
  	
  	enter_string(str);                 // �����������ļ��ж����enter_string����
  	
	printf("please input a char will deleted \n");
	scanf("%c",&c);
  	
  	delete_string(str,c);               // �����������ļ��ж����delete_string���� 
  	print_string(str);                  // �����������ļ��ж����print_string����  
	 
	   
  	return 0;     
}
