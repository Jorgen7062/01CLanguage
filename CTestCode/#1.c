#include<stdio.h>  

 
#define f(x,y) x##y 
#define g(a) #a  
#define h(a) g(a)  /*�˺궨���У��ޡ�# ������������У���  h(    f(1,2)    ) �У�f(1,2)��ִ�У�֮����ִ����������  #12*/ 
int main()  
{  
	printf("%s\n", g(    f(1,2)    )    );  	//#  f(1,2)
	printf("%s\n", g(  ( f(1,2) )  )    );  	//#( f(1,2) )	

	printf("%s\n", h(    f(1,2)    )    );  	//1##2	 	--> 	#(1##2)
	
	
	return 0;  
} 
