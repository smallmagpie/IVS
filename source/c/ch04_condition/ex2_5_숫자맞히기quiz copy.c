#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    

    srand((unsigned int)time(NULL));

    int random = (rand()%101);

    printf("���� = %d\n",random);

    printf("������ ���ڰ� ���õǾ����ϴ�.\n");

    

    for(int i = 5; i>=1; i--){ 

        int res=0;

        printf("������ȸ�� %d �Դϴ�\n",i);
        printf("���ڸ� �Է����ּ���.\n");

        scanf("%d", &res);
	    printf("�Է��Ͻż��� %d�Դϴ�\n",res);

        if(random<res){
            printf("DOWN\n");
        }else if(random>res){
            printf("UP\n");
        }else if(random==res){
            printf("�����Դϴ�.\n");
            break;
        }
        
        if(i==1){
            printf("����ȸ�� ����Ͽ����ϴ�.");
        }
    }

    return 0;
}