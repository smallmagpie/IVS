#include <stdio.h>

int main(){
    //char* name = "jenny"; //���ڿ��� �׳� ���� �迭�̴�.

    //char name[] = "jenny"; //�� �Ʒ��� ����.

    char name[] = {'j','e','n','n','y','\0'};//�� �迭�� ����   NULL���� ������ �ڷ� ��� �ް� ��(����ħ)
    for(int i =0; i<6; i++){
        printf("index : %d : ���� : %c\n",i,name[i]);
         printf("index : %d : ���� : %s\n",i,name); //���۷��� �ּ�, ������ ����

    }
}