#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);

int main(){

    srand((unsigned int) time(NULL));

    int level, anwser = 0;

    for(int level =1; level < 4; i++){
    int num1 = getRandomNumber(int level);
    int num2 = getRandomNumber(int level);
    showQuestion(int level, int num1, int num2)
    scanf("%d",&answer);
    
    if(anwser == num1*num2){
        printf("%d 단계 정답 입니다",level);
    }else{
        printf("실패");break;
    }
 

   
    }

    return 0;
}


int getRandomNumber(int level){

    
   

    return (rand()%4+1) + (level-1)*4;
}

void showQuestion(int level, int num1, int num2){
    printf("\n%d레벨 구구단을 외자\n",level);
    printf("힌트 : %d x %d >> ",num1,num2);
}