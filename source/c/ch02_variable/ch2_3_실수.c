//�Ǽ��� (float 4 byte, double 8byte)
//������ (int 4byte, long long 8byte) float �� �� ��Ȯ�� ������ ��� �Ұ���

#include <stdio.h>

int main() {

	int age = 20;
	long long money = 2200000000L;
	float f = 3.14195265359F;
	double d = 3.14195265359;

	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);

	if (f == d) {
		printf("f = d");
	}
	else {
		printf("f��d�� �ٸ���\n");
	}


	f = 10.1;
	d = 10.1;

	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);

	if (f == d) {
		printf("f = d");
	}
	else {
		printf("f��d�� �ٸ���\n");
	}
	
	return 0;
}