#include <stdio.h>

int main(){

    int hak = 0;

    printf("학점을 입력하시오(0~100점))");
    scanf("%d",&hak);

    int temp = hak == 100 ? 99 : hak;

    switch(temp/10)
    {
    
        case 9:
            printf("A학점");break;
        case 8:
            printf("A학점");break;
        case 7:
            printf("B학점");break;
        case 6:
            printf("B학점");break;
        case 5:
            printf("C학점");break;
        case 4:
            printf("C학점");break;
        case 3:
            printf("D학점");break;
        case 2:
            printf("D학점");break;
        case 1:
            printf("E학점");break;
        case 0:
            printf("E학점");break;     
        default:
            printf("정확한 키를 입력해주세요")       

    }
    return 0;
}