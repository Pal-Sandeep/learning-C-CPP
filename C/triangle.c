#include <stdio.h>

int main(){
    int n=15;
    int i,j,space;
    int ivar=97;
    for(i=0;i<=n;i++){
        for(space=n-i;space>=0;space--){
            printf(" ");
        }
        ivar=97;
        int ivar2 =65;
        for(j=0;j<i;j++){
            printf("%c%c ",ivar,ivar2);
            ivar++;
        }   
        printf("\n");
    }


    return 0;
}