#include <stdio.h>

int main(){
    int n[10]={1,52,4,21,25,17,8,9,61,24};
    int bigger=0;
    int i=0,x;
    while(i<10){
        bigger=(n[i]>bigger)?n[i]:bigger;
        i++;
    }

    printf("biggest number of arry is : %d",bigger);
    
    return 0;
}