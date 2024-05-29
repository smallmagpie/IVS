#include <stdio.h>

struct vision{
    double left;
    double right;
};

typedef struct vision Vision;//struct vision을 Vision으로 타입으로 

Vision exchange(Vision robot); //robot은 Vision 타입

int main(void){
    
    Vision robot;
    printf("좌우 시력은?");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("입력된 좌우 시력 : %lf\t %lf\t\n",robot.left,robot.right);
    robot = exchange(robot);
    printf("입력된 좌우 시력 : %lf\t %lf\t\n",robot.left,robot.right);
}

Vision exchange(Vision robot){//매개변수 robot left right 교환
    double temp = robot.left;
    robot.left = robot.right;
    robot.left = temp;
    return robot; //좌우로 바뀐 구조체 변수가 그대로 전달

}