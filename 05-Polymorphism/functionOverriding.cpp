#include <iostream>
using namespace std;

class Parent{
    public:
        void poly(){
            cout<<"Inside the Parent class";
        }
};

class Child : public Parent{
    public:
        void poly(){;
            cout<<"Insite the Child class";
        }

};

int main(){
    Child x;
    x.poly();

    return 0;
}