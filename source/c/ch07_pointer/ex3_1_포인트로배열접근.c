#include <stdio.h>

int main(){

    int arr[3] = {10,20,30};
    for(int idx = 0; idx<3; idx++){
        printf("배열 arr[%d] = %d\n", idx, arr[idx]);
    }
    int* ptr = arr;

     for(int idx = 0; idx<3; idx++){
        printf("배열 arr[%d] = %d\n", idx, ptr[idx]);
    }
    ptr[0] = 99; ptr[1] = 88; ptr[2] = 77;
    
    printf("=========ptr 수정========\n");
    for(int idx = 0; idx<3; idx++){
        printf("배열 arr[%d] = %d\n", idx, ptr[idx]); //포인트변수이지만 배열처럼 액세스
    }

    for(int idx = 0; idx<3; idx++){
        printf("배열 arr[%d] = %d\n", idx, *(arr+idx)); //배열이지만 포인트변수처럼 액세스
    }
}