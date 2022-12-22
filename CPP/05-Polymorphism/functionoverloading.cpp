#include <iostream>
using namespace std;

void add(int x, int y){
    cout<< "x + y = "<<x+y<<"\n";
};

void add(double x, double y){
    cout<< "x + y = "<<x+y<<"\n";
};

void add(char x, char y){
    cout<< "x + y = "<<x+y<<"\n";
};

int main(){
    // sum of integers
    cout<<"sum of numbers: "<<add(10,15)<<"\n";
    // sum of double
    out<<"sum of numbers: "<<add(15.15,25.25)<<"\n";
    //
    out<<"sum of numbers: "<<add('o','k')<<"\n";

    return 0;
}