#include <stdio.h>
// �̸�(���� ����), �ּ�(��������)�� �Է¹ޱ�
/* scanf("%s",����,�Է¹���byte��) ġ���� ���� ���� white space(ȭ��� �Ͼ�� ���ڷ� ���̴� �� enter or space or "\n") 
�� ���� ���۳����� return�� ex) asd\n �Է� �� \n ���ۿ� �����, �� ó�� ������ white space�� ����

->gets(����)��� �Լ� ���� ���
'\n'���������� �ν��ϰ� �� �ڴ� ���ۿ��� ��������


*/

int main(){

    //char* name; �������� ������ �������ִ� ���� �ּ� ������ ���� name���� �ּҰ��� ����. 
    char name[128];
    char address[512];
    printf("�̸� >>\n");
    scanf("%s",name,sizeof(name));
  
    printf("�ּ� >>\n");
    // scanf("%s",address,sizeof(address));
    gets(address);//���۸� ����� �뵵�� gets
    gets(address);


    printf("�Է��� �̸� :%s\n",name);
    printf("�Է��� �ּ� :%s\n",address);




    return 0;
}