#include<setjmp.h>

static jmp_buf buf;

main()
{
   	volatile int b;
	b =3;

	if(setjmp(buf)!=0)
	{
		printf("%d",b);
		exit(0);
	}
	b=5;
	longjmp(buf,1);
}
