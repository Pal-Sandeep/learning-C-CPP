#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two values to swap : ");
    scanf("%d %d",&a,&b);
    // swaping value witout thrid variable 
    a= a+b;
    b=a-b;
    a=a-b;
    printf("values after swaping : \n");
    printf("value of a is : %d\n",a);
    printf("value of b is : %d\n",b);


    return 0;
}