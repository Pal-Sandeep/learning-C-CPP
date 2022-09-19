#include <iostream>
#include <string>
using namespace std;
class Car {
        public:
            string name;
            string color;
    };

int main(){
    Car Tata;

    Tata.name= "Nexon";
    Tata.color= "Red";

    cout<<Tata.name;
    cout<<Tata.color;

    return 0;
}