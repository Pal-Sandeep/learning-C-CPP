// reverse the given string
#include <stdio.h>
#include <string.h>
int main(){
    char name[7]="JAYDEEP" ;
    char rname[30];
    int i,len,last;
    
    printf("Your name is Before reversing : %s \n",name);
    
    len = sizeof(name);
    last = len-1;
    printf("length of string: %d \n",len);
    
    for(i=0;i<len;i++){
        rname[i]=name[last];
        last--;
    }
    rname[i]='\0';

    printf("reverse of the given string is rname : %s\n",rname);
    return 0;
}