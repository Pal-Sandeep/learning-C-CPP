#include <stdio.h>
#include "palindrome.c"
#include "primeNumber.c"
#include "numberReverse.c"
#include "armstrong.c"
#include "factors.c"
int palindrome(int n);
int primenumber(int n);
int numberReverse(int n);
int armstrong(int n);
int factors(int n);
int main(){
    int num;
    int result;
    int input=0;

    printf("Enter a number: ");
    scanf("%d",&num);
    // calling the functions
    palindrome(num);
    primenumber(num);
    numberReverse(num);
    factors(num);
    armstrong(num);

    // switch(input){
    //     case 1:
    //         printf("Enter a number two check its palindrome or not: ");
    //         scanf("%d",&num);
    //         palindrome(num);
    //         break;
    //     case 2:

    //         break;
    //     default:
    //         printf("\nPlease enter a Valid Input!");
    // }
    return 0;
}