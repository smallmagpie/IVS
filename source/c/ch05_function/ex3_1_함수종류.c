#include <stdio.h>
void line(int cnt); //�Լ�����(��ȯ���� ���� �Լ�) C���� �����ε� �Ұ�
void function_with_return();//(�Ű������� ���� �Լ�)

int main(){
    line(40);//�Լ� ȣ��
    void function_with_return();
    line(50);

    return 0;
}
void line(int cnt){ 
    for(int i = 0; i < cnt; i++){
        printf("=");

    }
    printf("\n");


}

void function_with_return(){
    printf("��ȯ���� �Ű������� ���� �Լ�\n");
}