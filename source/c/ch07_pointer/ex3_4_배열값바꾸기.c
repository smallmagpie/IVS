#include <stdio.h>
//void changeArray(int ptr[3]);
void changeArray(int* ptr); //�迭 �� ������ �����������ʾ� ��� ����
//�Ű������� �迭 ����
//���۷��� ó�� �̿�

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
