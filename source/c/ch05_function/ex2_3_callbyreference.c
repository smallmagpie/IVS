#include <stdio.h>
//value ���� �ƴ� reference ����
void sum(int from, int to, int* tot);// tot�� ����Ű�� �ּҰ��� ���� int���� �ִ� / to�� int ���� �ִ�.(from ����)
                                    //tot ȣ�� �� �ּҸ� �����ؾ��Ѵ�.
                                    //void return �� ���� x

int main(){
    int a =1, b=10; 
    int tot;
    sum(a, b, &tot);//value 1 ,10 �� �ּ� ���� 30����(����)
    printf("%d���� %d���� �������� %d\n",a,b,tot);

    a =10, b=100; 
    
    sum(a, b, &tot);//value 1 ,10 �� �ּ� ���� 30����(����)
    printf("%d���� %d���� �������� %d\n",a,b,tot);

    return 0;
}

void sum(int from, int to, int* tot){
    *tot = 0;  //30������ ���� ����Ŵ
    for(int i=from; i<=to; i++){
        *tot += i; //30������ ���� ��� �ٲ۴�. (������ ����)
    }

}//������ ���� ������ ȣ���ϴ� ������ ��. 10��

//������ ���� �ʿ��ϸ� c b v
