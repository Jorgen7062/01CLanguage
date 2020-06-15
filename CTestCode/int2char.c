#include <stdio.h>

void Int16_2_Uint8(void)
{
	char char_d = 0;
	char char_x = 2;
	
	short short_a = -17;
	
	unsigned char uchar_b = 0; 
	unsigned char uchar_c = 0;
	
	uchar_b = (unsigned char)short_a;
	uchar_c = short_a;
	char_d = uchar_c;
	
	printf("%#04x\n",short_a);	
	printf("%#04x\n",uchar_b);
	printf("%#04x\t%d\n",uchar_c,uchar_c);
	printf("%#04x\t%d\n",char_d,char_d);
	
	printf("%#04x\t%d\n",char_x,char_x);
	printf("%#04x\t%d\n",char_x,char_x);	
	
	return;	
}


int main()
{	

	Int16_2_Uint8();
	//unsigned int a=0x12345678;
	
		
//111
/*
	char *c=(char*)(&a + 1);
	c --;
	while(i < 4)
	{
		printf("%#04x\n",*c ); 
		c --;
		i ++;
	}
*/
	
//222
/*
	char *c=(char*)(&a + 1);	
	while(i++ < 4)
	{
		printf("%#04x\n",*--c ); 
	}
*/


//333
/*
	char ch = 0;
	
	while(i < 4)
	{
		ch = (a >>  (8 * (3-i)))&0xff;
		i ++;
		printf("%#04x\n",ch ); 
	}
*/
	return 0;
}
