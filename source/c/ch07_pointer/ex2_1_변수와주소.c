#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    char* str = "hello";
    printf("a���� �ּ� : %p, ������ : %d\n",&a,a);
    printf("b���� �ּ� : %p, ������ : %d\n",&b,b);
    printf("str�� �ּ� : %p, ���ڿ��ּ�:%p, ���ڿ�����:%s\n",&str,str,str);

    a = 10;
    b = 20;
    str = "hi";
    printf("\n\n");
    printf("a���� �ּ� : %p, ������ : %d\n",&a,a);
    printf("b���� �ּ� : %p, ������ : %d\n",&b,b);
    printf("str�� �ּ� : %p, ���ڿ��ּ�:%p, ���ڿ�����:%s\n",&str,str,str); //���ڿ��� ��ġ ����

    
}