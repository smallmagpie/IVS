#include <stdio.h>
//value 값이 아닌 reference 전달
void sum(int from, int to, int* tot);// tot가 가리키는 주소값에 가면 int값이 있다 / to에 int 값이 있다.(from 또한)
                                    //tot 호출 시 주소를 전달해야한다.
                                    //void return 값 존재 x

int main(){
    int a =1, b=10; 
    int tot;
    sum(a, b, &tot);//value 1 ,10 과 주소 전달 30번지(예시)
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);

    a =10, b=100; 
    
    sum(a, b, &tot);//value 1 ,10 과 주소 전달 30번지(예시)
    printf("%d부터 %d까지 누적합은 %d\n",a,b,tot);

    return 0;
}

void sum(int from, int to, int* tot){
    *tot = 0;  //30번지의 값을 가리킴
    for(int i=from; i<=to; i++){
        *tot += i; //30번지의 값을 계속 바꾼다. (포인터 변수)
    }

}//리턴이 없기 때문에 호출하는 곳으로 감. 10줄

//변수가 많이 필요하면 c b v
