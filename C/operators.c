#include <stdio.h>

int main(){
    int x=5;
    printf("Enter Something: ");
    scanf("%d",&x);
    x|=13;
    printf("%d",x);

    
    return 0;
}