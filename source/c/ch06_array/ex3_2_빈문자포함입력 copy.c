#include <stdio.h>
// 이름(빈문자 포함), 주소(빈문자포함)를 입력받기
/* scanf("%s",변수,입력받을byte수) 치명적 단점 존재 white space(화면상에 하얀색 문자로 보이는 것 enter or space or "\n") 
그 이전 버퍼내용을 return함 ex) asd\n 입력 시 \n 버퍼에 저장됨, 단 처음 나오는 white space는 무시

->gets(변수)라는 함수 많이 사용
'\n'이전까지만 인식하고 그 뒤는 버퍼에서 지워버림


*/

int main(){

    //char* name; 데이터의 공간이 안잡혀있는 상태 주소 내용을 담을 name에만 주소값이 저장. 
    char name[128];
    char address[512];

      printf("주소 >>\n");
    // scanf("%s",address,sizeof(address));
    //이 예제에서는 버퍼를 지울 필요가 없음
    gets(address);

    printf("이름 >>\n");
    
    scanf("%s",name,sizeof(name));
  
  


    printf("입력한 이름 :%s\n",name);
    printf("입력한 주소 :%s\n",address);




    return 0;
}