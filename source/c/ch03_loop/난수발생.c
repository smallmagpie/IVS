#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//rand() : 0~32767 난수 발생 함수
// 랜덤한 난수를 위해서 난수 발생 초기화 필요 (C언어만)

int main(){
    srand((unsigned int)time(NULL));//난수 초기화

    printf("%d\n",rand()%100);
    printf("%d\n",rand()%100);
    printf("%d\n",rand()%100);//1~99 사이의 난수 발생

    printf("%d\n",rand()%46);//1~45 사이의 난수 발생
    printf("%d\n",rand()%101);//1~100 사이의 난수 발생

    return 0;
}