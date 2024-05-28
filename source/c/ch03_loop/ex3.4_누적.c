#include <stdio.h>

int main(){

    int tot = 0; //누적 변수 필요

    for(int i =1; i<=10;i++){

        tot += i;
        
        if(i!=10){
            printf("%d + ",i);
        }
        else{
            printf("%d ",i);
        }
        
    }// 1~10 합
    

    printf("= %d\n",tot);

    return 0;
}