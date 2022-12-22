#include <iostream>
#include <string>
using namespace std;
class Car {
        public:
            string name;
            string brand;
            string model;
            int year;
            string color;

            Car(string x,string y,int z,string c){
                brand = x;
                model = y;
                year = z;
                color = c;
            }
    };

int main(){
    Car Tata("Tata","Alto",2022,"Blabla");
    Car Ford("Fortuner","Desert",2021,"White");

    Tata.name= "Nexon";
    Tata.color= "Red";

    cout<<Tata.name;
    cout<<Tata.color;

    cout<<"Car Description:"<<Ford.brand<<"\n";
    cout<<Ford.model<<"\n";
    cout<<Ford.year<<"\n";
    cout<<Ford.color<<"\n";
    return 0;
}
