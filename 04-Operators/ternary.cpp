#include <iostream>

using namespace std;

int main(){
    int x[10] = {1,54,47,27,66,87,25,31,74,10};
    int i=0;
    int big;
    while(i<10){
        big = ((x[i])<(x[i+1]))?x[i+1]:x[i];    //ternary oprator example >> if the given condition is true 
        i++;                                //the first part will be executed and if not the second X
    };                                      //the first part will be executed and if not the second part will be executed                        
    
    cout<<"Biggest number of given array is: "<<big<<"\n";
    return 0;
}