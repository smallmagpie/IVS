//실수형 (float 4 byte, double 8byte)
//정수형 (int 4byte, long long 8byte) float 쓸 시 정확한 데이터 출력 불가능

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
		printf("f와d는 다르다\n");
	}


	f = 10.1;
	d = 10.1;

	printf("f = %.11f\n", f);
	printf("d = %.11lf\n", d);

	if (f == d) {
		printf("f = d");
	}
	else {
		printf("f와d는 다르다\n");
	}
	
	return 0;
}