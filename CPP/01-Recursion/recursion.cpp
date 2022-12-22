#include <iostream>
using namespace std;

int sum(int n){
    if (n > 0) {
        return n + sum(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    cout<<"Sum of given number: "<< sum(n);
    return 0;
}