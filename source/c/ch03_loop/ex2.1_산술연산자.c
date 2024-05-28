#include <stdio.h>
//산술연산자 : + - * / %
int main(){
    int n1 = 33, n2 = 10;
    printf("%d %c %d = %d\n",n1,'/',n2,n1/n2);
    //형변환 : 묵시적형변환 int i = 3.2, 명시적형변환 (double) n1/ double (n1)
        
    printf("%d %c %d = %.3lf\n",n1,'/',n2,(double)n1/n2);
    printf("%d %c %d = %d\n",n1,'%',n2,n1%n2);
    //% 나머지 연산의 경우 데이터를 통계적으로 이용시 데이터를 줄이는 목적으로 이용됐었음 -> 데이터 그룹을 나눌 때 주로 사용 (홀/짝)

    if(n1%2 == 0){
        printf("n1은 짝수\n");
    }
    else{
        printf("n1은 홀수\n");
    }


    
}
