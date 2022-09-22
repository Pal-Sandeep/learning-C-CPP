// reverse a given line by user
#include <stdio.h>
#include <string.h>

int main(){
    char line[100];
    int i=0;
    char word[15];
    char rline[100];
    int count=0;
    printf("Enter a line to reverse: ");
    gets(line);
    while(line[count]!='\0'){
        count++;
    }

    line[count]='\0';
    i = 0;
    int w,w1=0,last;
    int len=count-1;
    printf("You enter this line: %s\n",line);
    printf("length of string is: %d\n",count);
    while(i<=count){
        if((line[i]==' ') || (line[i]=='\0')){
            last = i-1;
            for(w=w1;w<i;w++){
                rline[w]=line[last];
                last--;
            }
            rline[i]=line[i];
            printf("%d, ",i);
            w1 = i+1;
        }
        i++;
    }

    rline[i]='\0';
    printf("\nLine after reverse: %s",rline);
      
    return 0;
}