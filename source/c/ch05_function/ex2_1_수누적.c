#include <stdio.h>

int main(){

    int a=1, b=100;
    int tot = 0;
    for(int i=a; i<=b; i++){
        tot += i;
    }
    printf("%d부터 %d까지 누적 합은 %d입니다\n",a,b,tot);

    int a=10, b=100;
    int tot = 0;
    for(int i=a; i<=b; i++){
        tot += i;
    }
    printf("%d부터 %d까지 누적 합은 %d입니다\n",a,b,tot);

    return 0;
}