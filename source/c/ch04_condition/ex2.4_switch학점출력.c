#include <stdio.h>

int main(){

    int hak = 0;

    printf("������ �Է��Ͻÿ�(0~100��))");
    scanf("%d",&hak);

    int temp = hak == 100 ? 99 : hak;

    switch(temp/10)
    {
    
        case 9:
            printf("A����");break;
        case 8:
            printf("A����");break;
        case 7:
            printf("B����");break;
        case 6:
            printf("B����");break;
        case 5:
            printf("C����");break;
        case 4:
            printf("C����");break;
        case 3:
            printf("D����");break;
        case 2:
            printf("D����");break;
        case 1:
            printf("E����");break;
        case 0:
            printf("E����");break;     
        default:
            printf("��Ȯ�� Ű�� �Է����ּ���")       

    }
    return 0;
}