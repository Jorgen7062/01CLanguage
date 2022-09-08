#include <stdio.h>
 
void  fun(int  **p){
    int  b=100;
    *p=&b;
}

void  fun1(void){
    int c = 120;
}
 
int main(){
    int  a=10;
    int  *q;

    q=&a;
    printf("%d\n",*q);  //打印指针

    fun(&q);            //获取函数fun 中局部变量 int b 的地址
    printf("%d\n",*q);  //从函数fun退出后，局部变量的指针是野指针，但是其中的数值还是保持100，故打印结果是100

    fun1();             //调用fun1后，fun函数中的野指针指向的空间被int c = 120;占用
    printf("%d\n",*q);  //故打印结果是120
    return  0;
}
