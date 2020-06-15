#include <stdio.h>
#include <iostream>
 
#define P(A) printf("%s:%d\n",#A,A);
//#define P_char(A) printf("%s\n",#A);
#define P_char(A) printf("%s\n",A);
//#define SQR(x) printf("The square of "#x" is %d.\n", ((x)*(x)));
#define XNAME(n) (x##n)
#define _P_char(A)	P_char(A)

int main(int argc, char **argv)
{
	int a = 1, b = 2;
//	P(axx);
//	P_char(axx)
	printf("%s:%d\n",#x,a);
//	P(b);
//	P(a+b);	
//	SQR(8);	
//	P_char(XNAME(5));
//	printf("%s:%d\n",#a,a);
//	printf("%s\n",P_char(XNAME(5)));
//	printf("%s\n", #a);		
//	printf("%s\n",_P_char(XNAME(5)));	
	system("pause");
}

