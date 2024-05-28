#include <stdio.h>
#include <stdbool.h>

//비교연산자 : < <= > >= == !=
//삼항연산자 : (조건) ? (조건이 참 일 때의 값) : (조건이 거짓 일 때의 값)

int main(){
    int n1 = 10,n2 = 5;
    int result = (n1 >= n2); //stdbool을 통해 true or false 
    printf("%d %s %d, result = %s\n",n1,">=",n2,result ? "true" : "false");



}


