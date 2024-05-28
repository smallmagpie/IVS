#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    

    srand((unsigned int)time(NULL));

    int random = (rand()%101);

    printf("정답 = %d\n",random);

    printf("랜덤한 숫자가 선택되었습니다.\n");

    

    for(int i = 5; i>=1; i--){ 

        int res=0;

        printf("남은기회는 %d 입니다\n",i);
        printf("숫자를 입력해주세요.\n");

        scanf("%d", &res);
	    printf("입력하신수는 %d입니다\n",res);

        if(random<res){
            printf("DOWN\n");
        }else if(random>res){
            printf("UP\n");
        }else if(random==res){
            printf("정답입니다.\n");
            break;
        }
        
        if(i==1){
            printf("모든기회를 사용하였습니다.");
        }
    }

    return 0;
}