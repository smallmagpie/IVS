#include <stdio.h>

struct student{
    int id; //학번
    char name[20]; //이름
    double grade; //학점
};

void stPrint(struct student s);

int main(){
    
    // sArr[0].id = 101;
    // sArr[0].name = "홍길동"; //하나하나 초기화

    struct student sArr[3] ={{101,"홍길동",4.43},
                            {102,"홍동이",4.35},
                            {103,"길동이",4.21}};

    printf("학번\t이름\t학점\n");
    for(int idx = 0; idx<3; idx++){
       stPrint(sArr[idx]);
    }
}

void stPrint(struct student s){
    printf("%d\t%s\t%.2lf\n",s.id,s.name,s.grade);

}