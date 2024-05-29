#include <stdio.h>

int* returnArray(int* ptr);//배열을 리턴하고 싶으면 포인터로 리턴해야함

int main(){
    int arr[] = {10,20,30};
    
    printf("수정전");
    
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d]=%d\n",idx,arr[idx]);
    }
    int* afterArr = returnArray(arr); //afterArr 에 resultArr의 주소번호이 부여됨
    
    printf("수정후");
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d]=%d\n",idx,arr[idx]);
    }
}


int* returnArray(int* ptr){
//    *(ptr+1) = 99; // 1번지 방이 바뀜
    static int resultArr[3]; //새로운 배열 제작, 배열이면서 포인트 변수임 //정적으로 메모리에 항상 남아있어라 -> static
    for(int idx = 0; idx<3; idx++){
        resultArr[idx] = ptr[idx];// 깊은 복사
    }
    resultArr[1] = 99; // arr은 그대로 두고 resultArr만 수정

    return resultArr;

}
