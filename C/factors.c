#include <stdio.h>

int main(){
    int n;
    int x=2;
    printf("Enter a number to find its factors: ");
    scanf("%d",&n);
    printf("Factors of given Number %d: ",n);
    while(x<=n/2){
        if(n%x==0){
            printf("%d",x);
            printf(",");
        }
        x++;
    }

    return 0;
}