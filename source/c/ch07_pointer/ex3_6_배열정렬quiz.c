#include <stdio.h>
//�迭�ȿ� ���� �������� �����ϴ� �Լ��� �����Ͻÿ�.

void sort(int* arr, int cnt); //�迭 ���� ���� : cnt
void swap_addr(int* a, int* b);

int main(){

    int lotto[6] = {5,10,15,20,25,30};
    printf("������\n");
    for(int idx = 0; idx <=5; idx++){
        printf("%d\t",lotto[idx]);
    }

    sort(lotto,6);

    printf("������\n");
    for(int idx = 0; idx <=5; idx++){
        printf("%d\t",lotto[idx]);
    }

}

void sort(int* arr, int cnt){

    for(int i = 0; i <= cnt-1; i++){
        for(int j = 1; j < cnt; j++){
            if (arr[i]>arr[j]){
                swap_addr(&arr[i],&arr[j]);
            }
        }
    }
}

void swap_addr(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}