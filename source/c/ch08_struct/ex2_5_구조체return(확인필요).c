#include <stdio.h>

struct vision{
    double left;
    double right;
};

typedef struct vision Vision;//struct vision�� Vision���� Ÿ������ 

Vision exchange(Vision robot); //robot�� Vision Ÿ��

int main(void){
    
    Vision robot;
    printf("�¿� �÷���?");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("�Էµ� �¿� �÷� : %lf\t %lf\t\n",robot.left,robot.right);
    robot = exchange(robot);
    printf("�Էµ� �¿� �÷� : %lf\t %lf\t\n",robot.left,robot.right);
}

Vision exchange(Vision robot){//�Ű����� robot left right ��ȯ
    double temp = robot.left;
    robot.left = robot.right;
    robot.left = temp;
    return robot; //�¿�� �ٲ� ����ü ������ �״�� ����

}