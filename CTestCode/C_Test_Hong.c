/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

#define hong_0	0 
#define hong_1  1
/*Function*/
int main()
{

#if defined(hong_0) && hong_0
	printf("hong_0\n");
	
#endif

#if defined(hong_1) && hong_1
	printf("hong_1\n");
	
#endif	
	printf("???????????????...\n");	
	getchar();

	return 0;
}




