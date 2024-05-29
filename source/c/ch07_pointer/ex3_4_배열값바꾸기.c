#include <stdio.h>
//void changeArray(int ptr[3]);
void changeArray(int* ptr); //배열 방 개수가 고정되있지않아 사용 용이
//매개변수로 배열 전달
//레퍼런스 처럼 이용

int main(){
    int arr[] = {10, 20, 30};

    for(int i = 0; i<3; i++){
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
    changeArray(arr);
    for(int i = 0; i<3; i++){
        printf("arr[%d] = %d\n",i,*(arr+i));

    }
    printf("%p",&arr); 

}

void changeArray(int* ptr){
    //ptr[1]=99;
    *(ptr+1) = 99;

}
