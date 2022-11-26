#include <stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j,m;
    for(i=0;i<3;i++){
            printf("\nEnter the value of row: ");
            scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    }
    for(i=0;i<3;i++){
            printf("\nEnter the value of row: ");
            scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
    }

    //matrix a and b printing
    printf("Matrix A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",a[i][j]);        
        }
        printf("\n");
    }
    printf("Matrix B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",b[i][j]);        
        }   
        printf("\n");
    }
    printf("\nMultiplication of given matirix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(m=0;m<3;m++){
                c[i][j]+=(a[i][m]*b[m][j]);
            }
        }   
    }

    //printing the result Matirx C
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",c[i][j]);        
        }   
        printf("\n");
    }

    return 0;
}
