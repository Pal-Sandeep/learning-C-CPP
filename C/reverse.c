// reverse the given string
#include <stdio.h>
#include <string.h>

int main(){
    char name[20],rname[20];
    int i,last;
    int length=0;

    printf("Enter name you want to reverse: "); //taking input from user
    gets(name);
    
    while(name[length]!='\0'){      // counting the length of array
        length+=1;
    }
    last = length-1;                //index of last element in array
    for(i=0;i<length;i++){
        rname[i]=name[last];
        last--;
    }
    rname[i]='\0';                  
    printf("\nlength of name %d\n",length);
    printf("reverse name : %s\n",rname);

    return 0;
}