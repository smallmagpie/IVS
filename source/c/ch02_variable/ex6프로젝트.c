#include <stdio.h>

int main() {
	char gender2[5],name2[100];
	int kor=0, mat=0, eng=0;

	printf("�̸��� �Է��ϼ��� : \n");
	scanf_s("%s", name2, (unsigned)sizeof(name2));

	printf("������ �Է��ϼ���(��/��) : \n");
	scanf_s("%s", gender2, (unsigned)sizeof(gender2));
	printf("���� ���� ���� ������ �Է��ϼ��� : \n");
	scanf_s("%d%d%d",&kor, &mat, &eng);
	
	

	printf("--�л� ����--\n");
	printf("�̸� : %s\n",name2);
	printf("���� : %s\n", gender2);
	printf("���� : %d\n", kor);
	printf("���� : %d\n", eng);
	printf("���� : %d\n", mat);
	printf("�հ� : %d\n", kor + eng + mat);
	printf("��� : %lf\n", (kor + eng + mat) / 3.0);
	
	return 0;

}