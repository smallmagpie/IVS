#include <stdio.h>

int main(){

    int hak=0;
    printf("������ �Է��Ͻÿ�(0~100��))");
    scanf("%d",&hak);

    if(hak>75 && hak<=100){
        printf("����� ������ A����");
    }else if(hak<=75 && hak>50){
        printf("����� ������ B����");
    }else if(hak<=50 && hak>25){
        printf("����� ������ C����");
    }else if(hak<=25 && hak>=0){
        printf("����� ������ D����");
    }else {
        printf("��ȿ�� ������ �ƴմϴ�.");
    }
    return 0;

}