#include <iostream>
using namespace std;
int factorial(int x){
    if (x>0){
        return x * factorial(x-1);   //using recursion for finding the factorial
    }else {
        return 1;
    }
};

int main(){
    int n;
    cout<<"Input a numer to find the factorial: ";
    cin>>n;
    
    cout<<"facotrial of teh given nubmer is: ";
    cout<<factorial(n);

    return 0;
}
