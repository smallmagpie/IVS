#include <stdio.h>//��ũ�帮��Ʈ 
//�տ��� �ּ� �ڿ��� �ּ� �� ����ü�� ��������.
//����ü �����ʹ� �̶� ����Ѵ�.

struct list
{
    int num;//����
    struct list* next;//�ּ�
};

int main(void){
    struct list a = {10,0},b= {20,0},c={30,0};
    struct list* head = &a;
    struct list* current;

    a.next= &b;
    b.next= &c;

    printf("��ü������ ���\n");
    current = head;
    while(current){//�ּ��� ���� 1�� �ƴϰ� c���� �ּҰ��� 0�� �Ǳ⶧���� �ݺ��� Ż��
    
        printf("%d\t",current->num);
        current = current -> next; 
    }

}