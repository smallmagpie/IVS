#include <stdio.h>
//call by value(��)
//call by reference(�ּ�)
//�Լ��̸��� �����̸� �����̸� ���Ұ�
int sum(int from, int to);//�Լ� ���� (call by value) ���� �տ��� ���� �ʿ�

int main(){
    int a=1,b=100;
    int tot = sum(a,b);//sum(a,b)ȣ�� , return�� ����
    printf("%d���� %d���� �������� %d\n",a,b,tot);
    
    a = 10; b=100;
    tot = sum(a,b);
    printf("%d���� %d���� �������� %d\n",a,b,tot);
    
    return 0;

}
int sum(int from,int to){//�Լ� ���� value�� �������� from = 1, to = 100    
    int result = 0;
    for(int i = from; i<=to; i++){
        result += 1;
    }
    return result;


}
