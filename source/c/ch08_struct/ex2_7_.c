#include <stdio.h>//링크드리스트 
//앞에는 주소 뒤에는 주소 인 구조체를 만들어야함.
//구조체 포인터는 이때 사용한다.

struct list
{
    int num;//점수
    struct list* next;//주소
};

int main(void){
    struct list a = {10,0},b= {20,0},c={30,0};
    struct list* head = &a;
    struct list* current;

    a.next= &b;
    b.next= &c;

    printf("전체데이터 출력\n");
    current = head;
    while(current){//주소의 값은 1이 아니고 c에서 주소값이 0이 되기때문에 반복문 탈출
    
        printf("%d\t",current->num);
        current = current -> next; 
    }

}