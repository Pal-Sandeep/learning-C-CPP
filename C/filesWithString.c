// String reverse with files
#include <stdio.h>
#include <string.h>

int main(){
    char line[1000];
    int i=0;
    char ch;
    char word[15];
    char rline[1000];
    int count=0;
    
    FILE *fpointer;
    fpointer = (fopen("help.txt", "r+"));
    printf("content of the file before the reversing: \n");
    while(1){
        ch = fgetc(fpointer);              //READING CHARACTER FROM FILE  
        line[i]=ch;
        i++;

        if (ch == EOF){
            break;
        }
        printf("%c",ch);
    }   
    count=0;
    while(line[count]!=EOF){
        count++;
    }

    line[count]='\0';
    i = 0;
    int w,w1=0,last;
    int len=count-1;
    int space=0;
    printf("length of string is : %d\n",count);
    while(i<=count){
        if((line[i]==' ') || (line[i]=='\0')||(line[i]=='\n')){
            last = i-1;
            for(w=w1;w<i;w++){
                rline[w]=line[last];
                last--;
            }
            rline[i]=line[i];
            space++;
            w1 = i+1;
        }
        i++;
    }
    rline[i]='\0';
    printf("Spaces, Newline and EOF in File: %d.\n",space);
    printf("\nLine after reverse:\n%s",rline);
    fseek(fpointer,0,SEEK_SET);
    fprintf(fpointer,"%s",rline);
    fclose(fpointer);
    return 0;
}