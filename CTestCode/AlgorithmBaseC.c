/*Head File*/
#include <stdio.h>

#include <stdarg.h>



/*Function Declaration*/
void Recursion_x_n_main(void);
int Recursion_x_n ( int x , int  n);

void swap_main(void);
void f1(int *, int); 
void f2(int *, int); 
void(*p[2]) (int *, int);

int ripple (int , );
void ripple_main(void);



/*Function*/
int main()
{
//	Recursion_x_n_main();
//	swap_main();
	ripple_main();
	
	printf("按回车键结束程序...\n");
	getchar();

	return 0;
}

/*void Recursion_x_n_main(void)*/
void Recursion_x_n_main(void)
{
	int RecursionVal = 0;
	
	RecursionVal = Recursion_x_n (3 , 2);

	printf("RecursionVal = %d\n\n", RecursionVal);
	
	return;
}

int Recursion_x_n(int x, int n)
{
    int val;
    val = 1;
    
    if (n>0) 
    {
        if (n%2 == 1)  val = val *x;
        val = val * Recursion_x_n(x*x , n/2);
    }
    return val;
}
/*END void Recursion_x_n_main(void)*/

/*void swap_main(void)*/
void swap_main(void)
{
	int a;
    int b;
    
    p[0] = f1;
    p[1] = f2;
    a=3;
    b=5;
  
    p[0](&a, b);
    printf("%d\t %d\t", a, b);

    p[1](&a, b);
    printf("%d\t %d\t", a, b);	
	
}
void f1(int* p , int q)
{
    int tmp;
    tmp =*p;
    *p = q;
    q= tmp;
}

void f2(int* p , int q)
{
    int tmp;
    tmp = *p;
    *p = q;
    q = tmp;
}
/*END void swap_main(void)*/


void ripple_main(void)
{
    int num;
    num = ripple ( 3, 5,7);
    printf( "%d" , num);
}

int ripple (int n, )
{
    int i , j;
    int k;  
    va_list p;
    
    k= 0;
    j = 1;
    va_start(p, n); 
    
    for (; j<n; ++j)
    {
        i =  va_arg(p , int);
        for (; i; i &=i-1 )
            ++k;
    }
    return k;
}
