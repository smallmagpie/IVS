#include <stdio.h>

struct student{
    int id; //�й�
    char name[20]; //�̸�
    double grade; //����
};

int main(){
    
    // sArr[0].id = 101;
    // sArr[0].name = "ȫ�浿"; //�ϳ��ϳ� �ʱ�ȭ

    struct student sArr[3] ={{101,"ȫ�浿",4.43},
                            {102,"ȫ����",4.35},
                            {103,"�浿��",4.21}};

    printf("�й�\t�̸�\t����\n");
    for(int idx = 0; idx<3; idx++){
        printf("%d\t%s\t%.2lf\n",sArr[idx].id,sArr[idx].name,sArr[idx].grade);

    }


}