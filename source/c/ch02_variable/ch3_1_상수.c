#include<stdio.h>
//상수(불변한 변수) - 대부분 대문자
int main() {

	const double PI = 3.14159265359;
	int r = 3;
	//PI = 3.14 상수이므로 수정 불가, 컴파일 불가
	printf("반지름이 %d인 원의 넓이는 %.3lf\n", r, PI);



	return 0;
}

