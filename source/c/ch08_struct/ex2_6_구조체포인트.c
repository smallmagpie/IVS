#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
};

int main(){
    struct GameInfo gameInfo1 ={"사이버C",2024,33000};
    struct GameInfo* gameptr = &gameInfo1;//gameInfo1과 gameptr로 액세스하는 방법
    
    printf("게임정보(gameInfo)\n");
    printf("게임이름 : %s\n",gameInfo1.name);
    printf("게임출시연도 : %d\n",gameInfo1.year);
    printf("게임가격 : %d\n",gameInfo1.price);

    printf("게임정보(gameInfo포인터변수)\n");
    printf("게임이름 : %s\n",(*gameptr).name);
    printf("게임출시연도 : %d\n",(*gameptr).year);
    printf("게임가격 : %d\n",(*gameptr).price);

    printf("게임정보(gameInfo포인터변수)\n");
    printf("게임이름 : %s\n",gameptr->name);//구조체 포인터에서는 이 방법을 주로 사용합니다.
    printf("게임출시연도 : %d\n",gameptr->year);
    printf("게임가격 : %d\n",gameptr->price);
}