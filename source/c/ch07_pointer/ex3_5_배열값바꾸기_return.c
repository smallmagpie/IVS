#include <stdio.h>

int* returnArray(int* ptr);//�迭�� �����ϰ� ������ �����ͷ� �����ؾ���

int main(){
    int arr[] = {10,20,30};
    
    printf("������");
    
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d]=%d\n",idx,arr[idx]);
    }
    int* afterArr = returnArray(arr); //afterArr �� resultArr�� �ּҹ�ȣ�� �ο���
    
    printf("������");
    for(int idx = 0; idx < 3; idx++){
        printf("arr[%d]=%d\n",idx,arr[idx]);
    }
}


int* returnArray(int* ptr){
//    *(ptr+1) = 99; // 1���� ���� �ٲ�
    static int resultArr[3]; //���ο� �迭 ����, �迭�̸鼭 ����Ʈ ������ //�������� �޸𸮿� �׻� �����־�� -> static
    for(int idx = 0; idx<3; idx++){
        resultArr[idx] = ptr[idx];// ���� ����
    }
    resultArr[1] = 99; // arr�� �״�� �ΰ� resultArr�� ����

    return resultArr;

}
