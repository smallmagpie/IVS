#include <stdio.h>

void swap_addr(int* a, int* b); //�Լ�(call by reference) ����

int main(){

    int a=10,b=20;
    printf("swap()ȣ�� ��\ta �ּ� : %p a �� :%d\t b �ּ� : %p b �� :%d\n",&a,a,&b,b);
    swap_addr(&a,&b); //�Լ� ȣ��
    printf("swap()ȣ�� ��\ta �ּ� : %p a �� :%d\t b �ּ� : %p b �� :%d\n",&a,a,&b,b);

}

void swap_addr(int* a, int* b){//�Լ� ����
    
   
    
    printf("�Լ� �ȿ����� a �ּ� : %p, a�� �� : %d\tb �ּ� : %p, b�� �� : %d\n",a,*a,b,*b);
    
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("�Լ� �ȿ����� a �ּ� : %p, a�� �� : %d\tb �ּ� : %p, b�� �� : %d\n",a,*a,b,*b);


}