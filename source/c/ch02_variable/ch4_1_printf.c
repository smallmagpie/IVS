#include <stdio.h>
	//���������� : %d, %f, %.3lf, %c, %s
	// 
int main(){
	int num1 = 10;
	int num2 = 11;
	
	printf("�μ��� �� = %d\n", num1 + num2);
	// ������(4byte)�� ������(4byte) ��Ģ ���� ����� ������(4byte)
	
	printf("�μ��� ��� = %lf\n", (num1 + num2)/2.0);
	// ������(4byte)/�Ǽ���(8byte) ��Ģ ���� ��� �Ǽ��� ��� 2�� �ƴ� 2.0�� ���� or (double)�� num1, num2�� ����

	return 0;
}

