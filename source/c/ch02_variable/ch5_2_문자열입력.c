#include<stdio.h>

int main() {

	char gender1, name1[100];

	printf("������ �Է��ϼ���.\n");

	scanf_s("%c", &gender1);//gender�� �ּҰ�

	printf("�̸��� �Է��ϼ���.\n");

	scanf_s("%s", name1, (unsigned)sizeof(name1));//

	printf("���� = %c\n�̸� = %s\n", gender1, name1);

	return 0;


}