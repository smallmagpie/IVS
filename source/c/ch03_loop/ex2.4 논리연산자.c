#include <stdio.h>
//논리연산자 : &&(and), ||(or), !(not)

int main(void){

    int i=1, j=10, h=10; 

    //printf("(i<j) && (++j>h) = %s\n",((i<j) && (++j>h)) ? "true" : "false");

    printf("(i>j) && (++j>h) = %s\n",((i>j) && (++j>h)) ? "true" : "false");//&&(and) 연산 수행시 앞 항이 참이 아니면 뒤를 시행 하지 않음 결과는 false

    printf("j = %d\n",j);//뒤 항을 넘어간것을 j = 10 임으로 확인

   /* printf("(i>j) || (++j>h) = %s\n",((i>j) || (++j>h)) ? "true" : "false");//앞항이 false기 때문에 뒤항을 실행

    printf("j = %d\n",j);//때문에 증가함 */


    printf("(i<j) || (++j>h) = %s\n",((i<j) || (++j>h)) ? "true" : "false");//j++이 일어나지 않음

    printf("j = %d\n",j);//

    return 0;
}