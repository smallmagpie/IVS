#include <stdio.h>
/*
    ����ü : ���� ������ �����͸� �ϳ��� ���� �ڷ������� 
*/
struct student //����ü�� ����
{
    int num; // �й�(student ����ü ���)
    double grade; //����(student ����ü ���)


};

int main(){
   
    struct student s1 ={101,4.44};//����ü ��� ������ ������ �ʱ�ȭ �ؾ���
    
    printf("�й� = %d, ���� = %.2lf\n",s1.num,s1.grade);




}