#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void unit(int x);
void tenth(int x,int len,int* length,int *step);
void once(int x,int* length ,int* step,char amount[]);
void twice(int* length, int* step ,char amount[]);
int main(){
    char amount[10],iamount[10];
    int i=0;
    int len=0;
    printf("Enter amount you want to convert: ");
    gets(amount);
    while(amount[i]!='\0'){
        len++;
        i++;
    }
    amount[i]='\0';
    len = len-1;
    int step =0;
    
    while (len>=0)
    {
        once(len,&len,&step,amount);
        twice(&len,&step,amount);
    }
        printf("Rupees Only\n");
    return 0;
}

void unit(int x){
    if((x==2)){
        printf("Hundred ");
    }
    else if((x==3)||(x==4)){
        printf("Thousand ");
    }
    else if((x==5)||(x==6)){
        printf("Lakh ");
    }
    else if((x==7)||(x==8)){
        printf("Crore ");
    }else if(x==9){
        printf("Arab ");
    }
};

void tenth(int x,int len,int *length,int *step){
    if ((x<10)){
        *length-=1;
        *step+=1;
    }
    else if ((x>9)&&(x<20)){
                if(x==10){
                    printf("Ten ");
                }else if(x==11){
                    printf("Eleven ");
                }else if(x==12){
                    printf("Twelve ");
                }else if(x==13){
                    printf("Thirteen ");
                }else if(x==14){
                    printf("Fourteen ");
                }else if(x==15){
                    printf("Fifteen ");
                }else if(x==16){
                    printf("Sixteen ");
                }else if(x==17){
                    printf("Seventeen ");
                }else if(x==18){
                    printf("Eighteen ");
                }else if(x==19){
                    printf("Nineteen ");
                }
                unit(len);
                *length -=2;
                *step+=2;
    }
    else if ((x==20)||(x==30)||(x==40)||(x==50)||(x==60)||(x==70)||(x==80)||(x==90)){
        if(x==20){
            printf("Twenty ");
        }else if(x==30){
            printf("Thirty ");
        }else if(x==40){
            printf("Fourty ");
        }else if(x==50){
            printf("Fifty ");
        }else if(x==60){
            printf("Sixty ");
        }else if(x==70){
            printf("Seventy ");
        }else if(x==80){
            printf("Eightty ");
        }else if(x==90){
            printf("Ninety ");
        }
        unit(len);
        *length =*length-2;
        *step+=2;
    }
    else{
            if((x>20)||(x<100)){
                if ((x>20)&&(x<30)){
                printf("Twenty ");
                }
                else if ((x>30)&&(x<40)){
                    printf("Thirty ");
                }
                else if ((x>40)&&(x<50)){
                    printf("Forty ");
                }
                else if ((x>50)&&(x<60)){
                    printf("Fifty ");
                }
                else if ((x>60)&&(x<70)){
                    printf("Sixty ");
                }
                else if ((x>70)&&(x<80)){
                    printf("Seventy ");
                }
                else if ((x>80)&&(x<90)){
                    printf("Eighty ");
                }
                else if ((x>90)&&(x<100)){
                    printf("Ninety ");        
                }
                *length-=1;
                *step+=1;
            }
    }
};

void once(int x,int* length, int* step,char amount[]){
    if((*length==0)||(*length==2)||(*length==3)||(*length==5)||(*length==7)||(*length==9)){
                if(amount[*step]!='0'){                    
                    if(amount[*step]=='1'){
                        printf("One ");
                    }else if(amount[*step]=='2'){
                        printf("Two ");
                    }else if(amount[*step]=='3'){
                        printf("Three ");
                    }else if(amount[*step]=='4'){
                        printf("Four ");
                    }else if(amount[*step]=='5'){
                        printf("Five ");
                    }else if(amount[*step]=='6'){
                        printf("Six ");
                    }else if(amount[*step]=='7'){
                        printf("Seven ");
                    }else if(amount[*step]=='8'){
                        printf("Eight ");
                    }else if(amount[*step]=='9'){
                        printf("Nine ");
                    }
                    unit(*length);
                    *length-=1;
                    *step+=1;
                }else{
                    *length-=1;
                    *step+=1;
                }
        }
}

void twice(int* length, int* step ,char amount[]){
        if ((*length==1)||(*length==4)||(*length==6)||(*length==8))
        {
            char check[2];
            check[0]=amount[*step];
            check[1]=amount[*step+1];
            check[2]='\0';
            int ten = atoi(check);
            if (ten>10){
                tenth(ten,*length,length,step);
            }else{
                *length-=1;
                *step+=1;
            }
        }
}