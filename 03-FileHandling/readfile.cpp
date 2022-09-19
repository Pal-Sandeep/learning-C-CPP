#include<iostream>
#include <fstream>

using namespace std;

int main(){
    string justaline;
    ifstream tfile("demo.txt");
    while(getline(tfile,justaline)){
        cout<<justaline;
    };
    
    tfile.close();

    return 0;
}