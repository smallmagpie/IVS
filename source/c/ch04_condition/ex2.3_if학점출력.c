#include <stdio.h>

int main(){

    int hak=0;
    printf("학점을 입력하시오(0~100점))");
    scanf("%d",&hak);

    if(hak>75 && hak<=100){
        printf("당신의 학점은 A학점");
    }else if(hak<=75 && hak>50){
        printf("당신의 학점은 B학점");
    }else if(hak<=50 && hak>25){
        printf("당신의 학점은 C학점");
    }else if(hak<=25 && hak>=0){
        printf("당신의 학점은 D학점");
    }else {
        printf("유효한 점수가 아닙니다.");
    }
    return 0;

}