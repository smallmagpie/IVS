#include <stdio.h>

int main(){
    //char* name = "jenny"; //문자열은 그냥 문자 배열이다.

    //char name[] = "jenny"; //위 아래가 같다.

    char name[] = {'j','e','n','n','y','\0'};//윗 배열과 같다   NULL문자 없으면 뒤로 계속 받게 됨(끝마침)
    for(int i =0; i<6; i++){
        printf("index : %d : 글자 : %c\n",i,name[i]);
         printf("index : %d : 글자 : %s\n",i,name); //레퍼런스 주소, 포인터 변수

    }
}