#include <stdio.h>

int main(void){
    int floor = 0 ;
    printf("��� �Ƕ�̵带 �������(5~20)?");
    scanf("%d", &floor);

    for(int i=0 ; i<floor ; i++){
        for(int j=i ; j<floor ; j++){
            printf(" "); //��ĭ ���
        }

        for(int k=0 ; k<i*2+1 ; k++){
            printf("*");
        }

        printf("\n");
    }
}
