#include <stdio.h>

int main(){
    int a =1;
    int b =2;

    int* p = &a;
    printf("a�� �ּ� :%p\t��:%d\n",&a,a);
    printf("b�� �ּ� :%p\t��:%d\n",&b,b);
    
    printf("�����ͺ����� ����Ű�� �ּ� : %p\t��:%d\n",p,*p);

    p = &b;
    printf("�����ͺ����� ����Ű�� �ּ� : %p\t��:%d\n",p,*p);

       
}