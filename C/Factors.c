#include <stdio.h>

int factors(int n){
    int x=2;
    int flag=0;
    
    printf("\nFactors of given Number %d: ",n);
    while(x<=n/2){
        if(n%x==0){
            printf("%d",x);
            printf(",");
            flag = 1;
        }
        x++;
    }
    if (flag==0){
        printf("No factors other than 1 and %d",n);
    }

    return 0;
}
