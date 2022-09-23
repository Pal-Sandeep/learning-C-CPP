// reverse the given number
#include <stdio.h>

int numberReverse(int n){

    int sum=0;
    int remain;
    
    // printf("Enter a number to reverse: ");
    // scanf("%d",&n);

    while(n>0){
        remain = n%10;
        sum =sum*10+remain;
        n/=10;
    }
    printf("\nreverse of given number is %d",sum);
    
    return 0;
}