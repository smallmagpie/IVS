
//변수 선언 방법
#include<stdio.h>

int main() {

	//1. 자료형 변수명 = 초기값 
	int num1 = 10; // 선언과 초기화를 한번에 

	//2. 자료형 변수명;
	int num2 = 0;// 변수 선언만
	printf("num1 = %d \nnum2 = %d\n", num1, num2);

	//3. 자료형 변수명 =값, 변수명= 값;
	int num3 = 5, num4 = 6, num5= 7;
	printf("num3 = %d\nnum4 = %d\nnum5 = %d\n", num3, num4, num5);

	//자료형 변수명1, 변수명2 ....;
	int n1, n2, n3, n4;
	n1 = 1, n2 = 2, n3 = 3, n4 = 4;
	printf("n1=%d\nn2=%d\nn3=%d\nn4=%d", n1, n2, n3, n4);

	return 0;
}