// finding the size of a txt file 
#include <stdio.h>
#include <string.h>

int main(){
    char line[1000];
    int i=0;
    int count=0;
    int space=0,newline=0;
    FILE *fptr;
    fptr = (fopen("help.txt", "r"));

    while(1){
        line[i] = fgetc(fptr);              //READING CHARACTER FROM FILE  
        if (line[i] == EOF)
            break;
        i++;
        
    }
    line[i]='\0';                           // adding null at end
    
    while(line[count]!='\0'){
        count++;
    }

    line[count]='\0';
    i=0;
    while(i<=count){
        if(line[i]=='\n'){
            newline++;
        } 
        i++;
    }
    printf("\nSize of the file is: %d bytes",newline+count);
    fclose(fptr);
    return 0;
}