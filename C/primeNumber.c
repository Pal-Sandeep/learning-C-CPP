#include <stdio.h>
#include <stdbool.h>
int primenumber(int n){
    int i;  
    bool flag =true;
    // printf("Enter a number to check its prime or not: ");
    // scanf("%d",&n);
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d is Not a prime number;",n);
            flag = false;
            break;
        };
    }
    if (flag){
        printf("%d is a Prime number!",n);
    }



    return 0;
}