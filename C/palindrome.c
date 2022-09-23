#include <stdio.h>

int palindrome(int n){
    
    int sum=0;
    int remain;
    int x = n;
    while(x>0){
        remain = x%10;
        sum =sum*10+remain;
        x/=10;
    }
    if (n==sum){
        printf("%d is a paindrome number!\n",n);
    } else {
        printf("%d is not a palindrome number!\n",n);
    }
    
    return 0;
}