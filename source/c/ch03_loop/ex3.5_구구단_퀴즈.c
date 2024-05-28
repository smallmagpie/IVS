#include <stdio.h>
#include <stdlib.h>

int main(){

    int var = 0;
    int sum = 0;
    printf("what multiply?");
    scanf("%d",&var);

    for(int i = 1; i < 10; i++){
        sum = var * i;
        printf("%d x %d = %d\n",var,i,sum);

    }
    return 0;


}
