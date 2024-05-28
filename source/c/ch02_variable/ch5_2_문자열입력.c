#include<stdio.h>

int main() {

	char gender1, name1[100];

	printf("성별을 입력하세요.\n");

	scanf_s("%c", &gender1);//gender의 주소값

	printf("이름을 입력하세요.\n");

	scanf_s("%s", name1, (unsigned)sizeof(name1));//

	printf("성별 = %c\n이름 = %s\n", gender1, name1);

	return 0;


}