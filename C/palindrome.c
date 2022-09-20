#include <stdio.h>

int main(){
    int n;
    int sum=0;
    int remain;
    printf("Enter a number to check its palindrome or not: ");
    scanf("%d",&n);
    int x = n;
    while(x>0){
        remain = x%10;
        sum =sum*10+remain;
        x/=10;
    }
    if (n==sum){
        printf("%d is a paindrome number!",n);
    } else {
        printf("%d is not a palindrome number!",n);
    }
    
    return 0;
}