#include <stdio.h>

int main(){
    int a =1;
    int b =2;

    int* p = &a;
    printf("a의 주소 :%p\t값:%d\n",&a,a);
    printf("b의 주소 :%p\t값:%d\n",&b,b);
    
    printf("포인터변수가 가르키는 주소 : %p\t값:%d\n",p,*p);

    p = &b;
    printf("포인터변수가 가르키는 주소 : %p\t값:%d\n",p,*p);

       
}