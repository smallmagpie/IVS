#include <stdio.h>
//call by value(값)
//call by reference(주소)
//함수이름과 변수이름 같은이름 사용불가
int sum(int from, int to);//함수 선언 (call by value) 메인 앞에서 선언 필요

int main(){
    int a=1,b=100;
    int tot = sum(a,b);//sum(a,b)호출 , return값 받음
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
    
    a = 10; b=100;
    tot = sum(a,b);
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);
    
    return 0;

}
int sum(int from,int to){//함수 정의 value가 전해져서 from = 1, to = 100    
    int result = 0;
    for(int i = from; i<=to; i++){
        result += 1;
    }
    return result;


}
