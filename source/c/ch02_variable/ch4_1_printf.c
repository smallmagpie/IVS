#include <stdio.h>
	//서식지정자 : %d, %f, %.3lf, %c, %s
	// 
int main(){
	int num1 = 10;
	int num2 = 11;
	
	printf("두수의 합 = %d\n", num1 + num2);
	// 정수형(4byte)과 정수형(4byte) 사칙 연산 결과는 정수형(4byte)
	
	printf("두수의 평균 = %lf\n", (num1 + num2)/2.0);
	// 정수형(4byte)/실수형(8byte) 사칙 연산 결과 실수형 출력 2가 아닌 2.0을 삽입 or (double)을 num1, num2에 삽입

	return 0;
}

