#include <stdio.h>
//������,������,������,���밥,�������� Ű �Է¹޾�
// ��»��� : ��� :
/*          : ������ : 120
            : ������ : 120
*/
int main(){

    
    char* name[] = {"������","������","���밥","������","������"};//���ڿ��迭
    int arrHeight[5];//�޸� Ȯ���� ���� [5]
    int totHeight = 0;//Ű ���� ����
    int idxMin, minHeight=999;//�ִܽ��� ���ϱ� ���� �ε���
    int idxMax, maxHeight=1; //������� ���ϱ� ���� �ε���

    for(int i=0; i<5; i++){
        printf("%s�� Ű�� �Է����ּ���",name[i]);
        scanf("%d",&arrHeight[i]);

    
    if(minHeight > arrHeight[i]){
        minHeight = arrHeight[i];
        idxMin = i;}
    
    if(maxHeight < arrHeight[i]){
        maxHeight = arrHeight[i];
        idxMin = i;}


    totHeight = totHeight + arrHeight[i];
    }

    printf("��� Ű : %.3lf\n",totHeight/5.0);
   
    printf("����Ű %s %dcm\n",name[idxMax],maxHeight);
    printf("����Ű %s %dcm\n",name[idxMin],minHeight);

    
}