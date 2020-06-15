#include<stdio.h>  

 
#define f(x,y) x##y 
#define g(a) #a  
#define h(a) g(a)  /*此宏定义中，无“# ”运算符在其中，故  h(    f(1,2)    ) 中，f(1,2)先执行，之后再执行其运算结果  #12*/ 
int main()  
{  
	printf("%s\n", g(    f(1,2)    )    );  	//#  f(1,2)
	printf("%s\n", g(  ( f(1,2) )  )    );  	//#( f(1,2) )	

	printf("%s\n", h(    f(1,2)    )    );  	//1##2	 	--> 	#(1##2)
	
	
	return 0;  
} 
