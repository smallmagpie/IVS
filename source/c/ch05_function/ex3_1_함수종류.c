#include <stdio.h>
void line(int cnt); //함수선언(반환값이 없는 함수) C언어는 오버로딩 불가
void function_with_return();//(매개변수가 없는 함수)

int main(){
    line(40);//함수 호출
    void function_with_return();
    line(50);

    return 0;
}
void line(int cnt){ 
    for(int i = 0; i < cnt; i++){
        printf("=");

    }
    printf("\n");


}

void function_with_return(){
    printf("반환값도 매개변수도 없는 함수\n");
}