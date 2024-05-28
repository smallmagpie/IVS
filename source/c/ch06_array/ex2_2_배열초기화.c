#include <stdio.h>

//배열의 크기를 생략하지 않으면 그 방 갯구만큼 메모리 잡힘, 일부만 초기화해도 나머지 공간에는 0으로 초기화

int main(void){
    
    int subway[10]={};
    
    for(int idx = 0; idx < 10; idx ++){
        printf("subway[%d] = %d\n",idx,subway[idx]);
    }


    return 0;
}