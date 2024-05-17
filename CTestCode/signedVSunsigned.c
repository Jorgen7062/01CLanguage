/*Head File*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Function*/
int main()
{

    short s16_a = -18;
    unsigned char u8_b = 0;
    char s8_b = 0;

    s8_b = s16_a;

    u8_b = -18;

    if((char)u8_b == -18)
    {
        printf("u8_b == -18\n");
    }
    else
    {
        printf("u8_b > -18\n");
    }


    printf("s16_a = %d,u8_b  = %d,s8_b = %d\n",s16_a,u8_b,s8_b);

    printf("按任意键退出...\n");
    //getchar();
    return 0;
}
