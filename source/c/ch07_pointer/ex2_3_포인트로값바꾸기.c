#include <stdio.h>

int main(){
    int a =1, b=2;
    int* p = &a;

    *p *= 3;
    printf("%d\n",a);
    p = &b;
    *p *= 3;    
    printf("%d\n",b);//���������� a�� b�� �ǵ����� �ʾ����� ���� �ٲ� �� ����.
    printf("p�� ����Ű�� �ּ� : %p\t�� : %d\n",p,*p);
    printf("a �ּ� :%d\n",&a);
    printf("b �ּ� :%d\n",&b);
}