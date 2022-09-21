// reverse the given number
#include <stdio.h>

int main(){
    int x;
    int sum=0;
    int remain;
    
    printf("Enter a number to reverse: ");
    scanf("%d",&x);

    while(x>0){
        remain = x%10;
        sum =sum*10+remain;
        x/=10;
    }
    printf("reverse of given number is %d",sum);
    
    return 0;
}