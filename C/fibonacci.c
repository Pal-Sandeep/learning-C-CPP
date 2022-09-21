#include <stdio.h>

int main(){
    int n;
    int first=0,second=1;
    int next,i=1;
    printf("enter how much fabonacci series you want to print: ");
    scanf("%d",&n);
        printf("%d ",first);
    while(i<n){
        printf("%d ",second);
        next = first+second;
        first = second;
        second =next;
        i++;
    }

    return 0;
}