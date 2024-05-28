#include <stdio.h>
//비트연산자 : &(and), |(or), ^(XOR; 같으면 0, 다르면 1) 출력값은 0 혹은 1
//시프트 << , >>

int main(void){
//
    int n1 = 10; // 0000 1010(2)
    int n2 = 6;  // 0000 0110(2)
    // n1 & n1 =    0000 0010 => 2
    // n1 | n2 =    0000 1110 => 14
    // n1 ^ n2 =    0000 1100 => 12

    printf("n1 & n2 = %d\n",n1&n2);
    printf("n1 | n2 = %d\n",n1|n2);
    printf("n1 ^ n2 = %d\n",n1^n2);
    printf("n2 << 1 = %d\n",n2<<1); // << 시프트 시 두 배가됨



    return 0;
}