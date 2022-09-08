#include <stdio.h>
int main()
{
    char* a = "1234566666666666";
    char b[] = "12345677777777777777";
    printf("%d %d\n", sizeof(a), sizeof(b));
    return 0;
}
//结果：8 21