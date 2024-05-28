#include <stdio.h>

int main() {
	char gender2[5],name2[100];
	int kor=0, mat=0, eng=0;

	printf("이름을 입력하세요 : \n");
	scanf_s("%s", name2, (unsigned)sizeof(name2));

	printf("성별을 입력하세요(남/여) : \n");
	scanf_s("%s", gender2, (unsigned)sizeof(gender2));
	printf("국어 영어 수학 점수를 입력하세요 : \n");
	scanf_s("%d%d%d",&kor, &mat, &eng);
	
	

	printf("--학생 정보--\n");
	printf("이름 : %s\n",name2);
	printf("성별 : %s\n", gender2);
	printf("국어 : %d\n", kor);
	printf("영어 : %d\n", eng);
	printf("수학 : %d\n", mat);
	printf("합계 : %d\n", kor + eng + mat);
	printf("평균 : %lf\n", (kor + eng + mat) / 3.0);
	
	return 0;

}