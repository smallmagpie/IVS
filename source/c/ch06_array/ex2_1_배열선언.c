#include <stdio.h>


//배열에는 값 또는 주소들이 들어감
//배열(array)은 동일 자료형이 집합, 다른언어의 경우 동일 자료형이 아닐 수도 있음

int main(void){
    
    int subway[3];
    subway[0]=30;
    subway[1]=40;
    subway[2]=50;
    for(int idx = 0; idx < 3; idx ++){
        printf("subway[%d] = %d\n",idx,subway[idx]);
    }

    return 0;
}