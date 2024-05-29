#include <stdio.h>

int main(){
    int a =1, b=2;
    int* p = &a;

    *p *= 3;
    printf("%d\n",a);
    p = &b;
    *p *= 3;    
    printf("%d\n",b);//직접적으로 a와 b를 건들이지 않았지만 값을 바꿀 수 있음.
    printf("p가 가르키는 주소 : %p\t값 : %d\n",p,*p);
    printf("a 주소 :%d\n",&a);
    printf("b 주소 :%d\n",&b);
}