#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    char* str = "hello";
    printf("a변수 주소 : %p, 변수값 : %d\n",&a,a);
    printf("b변수 주소 : %p, 변수값 : %d\n",&b,b);
    printf("str의 주소 : %p, 문자열주소:%p, 문자열내용:%s\n",&str,str,str);

    a = 10;
    b = 20;
    str = "hi";
    printf("\n\n");
    printf("a변수 주소 : %p, 변수값 : %d\n",&a,a);
    printf("b변수 주소 : %p, 변수값 : %d\n",&b,b);
    printf("str의 주소 : %p, 문자열주소:%p, 문자열내용:%s\n",&str,str,str); //문자열의 위치 변경

    
}