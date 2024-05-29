#include <stdio.h>
//유수민,김현식,땅땅이,새대갈,슘당이의 키 입력받아
// 출력사항 : 평균 :
/*          : 김현식 : 120
            : 땅땅이 : 120
*/
int main(){

    
    char* name[] = {"유수민","김현식","새대갈","땅땅이","슘당이"};//문자열배열
    int arrHeight[5];//메모리 확보를 위해 [5]
    int totHeight = 0;//키 누적 변수
    int idxMin, minHeight=999;//최단신을 구하기 위한 인덱스
    int idxMax, maxHeight=1; //최장신을 구하기 위한 인덱스

    for(int i=0; i<5; i++){
        printf("%s의 키를 입력해주세요",name[i]);
        scanf("%d",&arrHeight[i]);

    
    if(minHeight > arrHeight[i]){
        minHeight = arrHeight[i];
        idxMin = i;}
    
    if(maxHeight < arrHeight[i]){
        maxHeight = arrHeight[i];
        idxMin = i;}


    totHeight = totHeight + arrHeight[i];
    }

    printf("평균 키 : %.3lf\n",totHeight/5.0);
   
    printf("최장키 %s %dcm\n",name[idxMax],maxHeight);
    printf("최장키 %s %dcm\n",name[idxMin],minHeight);

    
}