#include <stdio.h>
#include <string.h>

int main(){
    int i=10;
    int j=i;
    i = 99;
    printf("i = %d\tj = %d\n",i,j);
    
    char* str1 = "hello";//���ڿ��� ������(�ּ�)�� ����ִ�.
    char* str2;
    strcpy(str2,str1); // str1�� ���ڿ��� str2�� ����(���� ����)
   
    //str2 = str1; //���ڿ��� ��� �ּҸ� str1�� ����Ű�� �ּҰ��� �ְ� �ȴ�. str1�� �ּ� str2 (�ּ� �Ҵ� ��������)
    str1 = "bye"; //���ڴ� ���ο� ���� �ְ� �Ǹ�, ������ �ִ� �ּҸ� ������ ���ο� �ּҷ� �Ҵ��ϰ� ��.
                    //str1�� ���ڿ��� �ٲ�� str1�� ���� ���ڹ����� ���ο� ������ ���ڿ� ����.

    printf("str1 =%s\tstr2 = %s",str1,str2);



}