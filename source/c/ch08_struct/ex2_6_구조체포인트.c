#include <stdio.h>

struct GameInfo{
    char* name;
    int year;
    int price;
};

int main(){
    struct GameInfo gameInfo1 ={"���̹�C",2024,33000};
    struct GameInfo* gameptr = &gameInfo1;//gameInfo1�� gameptr�� �׼����ϴ� ���
    
    printf("��������(gameInfo)\n");
    printf("�����̸� : %s\n",gameInfo1.name);
    printf("������ÿ��� : %d\n",gameInfo1.year);
    printf("���Ӱ��� : %d\n",gameInfo1.price);

    printf("��������(gameInfo�����ͺ���)\n");
    printf("�����̸� : %s\n",(*gameptr).name);
    printf("������ÿ��� : %d\n",(*gameptr).year);
    printf("���Ӱ��� : %d\n",(*gameptr).price);

    printf("��������(gameInfo�����ͺ���)\n");
    printf("�����̸� : %s\n",gameptr->name);//����ü �����Ϳ����� �� ����� �ַ� ����մϴ�.
    printf("������ÿ��� : %d\n",gameptr->year);
    printf("���Ӱ��� : %d\n",gameptr->price);
}