#include <stdio.h>


//�迭���� �� �Ǵ� �ּҵ��� ��
//�迭(array)�� ���� �ڷ����� ����, �ٸ������ ��� ���� �ڷ����� �ƴ� ���� ����

int main(void){
    
    int subway[3];
    subway[0]=30;
    subway[1]=40;
    subway[2]=50;
    for(int idx = 0; idx < 3; idx ++){
        printf("subway[%d] = %d\n",idx,subway[idx]);
    }

    return 0;
}