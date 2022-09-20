#include <stdio.h>

int main(){
    int n;
    int sum=0;
    int remain;
    printf("Enter a number to check its armstrong or not: ");
    scanf("%d",&n);
    int x = n;
    while(x>0){
        remain = x%10;
        sum =sum + remain*remain*remain;
        x/=10;
    }
    if (n==sum){
        printf("%d is a Armstrong number!",n);
    } else {
        printf("%d is not a Armstrong number!",n);
    }
    
    return 0;
}