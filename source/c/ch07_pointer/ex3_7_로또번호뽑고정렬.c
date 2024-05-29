#include <stdio.h>

int* make_lotto();

int main(){
    
}

int* make_lotto(){
    static int lotto[6];
    srand((unsigned int) time(NULL));
    int i = 0;
    while(i<6){
        int temp = rand()%45+1;
        int duplication_check = 1;
    } 
    if
}