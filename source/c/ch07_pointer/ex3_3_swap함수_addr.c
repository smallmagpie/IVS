#include <stdio.h>

void swap_addr(int* a, int* b); //함수(call by reference) 선언

int main(){

    int a=10,b=20;
    printf("swap()호출 전\ta 주소 : %p a 값 :%d\t b 주소 : %p b 값 :%d\n",&a,a,&b,b);
    swap_addr(&a,&b); //함수 호출
    printf("swap()호출 후\ta 주소 : %p a 값 :%d\t b 주소 : %p b 값 :%d\n",&a,a,&b,b);

}

void swap_addr(int* a, int* b){//함수 구현
    
   
    
    printf("함수 안에서의 a 주소 : %p, a의 값 : %d\tb 주소 : %p, b의 값 : %d\n",a,*a,b,*b);
    
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("함수 안에서의 a 주소 : %p, a의 값 : %d\tb 주소 : %p, b의 값 : %d\n",a,*a,b,*b);


}