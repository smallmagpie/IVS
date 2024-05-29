#include <stdio.h>
#include <string.h>

int main(){
    int i=10;
    int j=i;
    i = 99;
    printf("i = %d\tj = %d\n",i,j);
    
    char* str1 = "hello";//문자열은 포인터(주소)에 들어있다.
    char* str2;
    strcpy(str2,str1); // str1의 문자열을 str2에 복사(깊은 복사)
   
    //str2 = str1; //문자열의 경우 주소를 str1이 가리키는 주소값을 넣게 된다. str1의 주소 str2 (주소 할당 얕은복사)
    str1 = "bye"; //문자는 새로운 값을 넣게 되면, 기존에 있는 주소를 버리고 새로운 주소로 할당하게 됨.
                    //str1의 문자열이 바뀌면 str1의 기존 문자버리고 새로운 공간에 문자열 저장.

    printf("str1 =%s\tstr2 = %s",str1,str2);



}