#include <iostream>
#include<fstream>
using namespace std;

//  ifstream - reads from a file
//  ofstream - create and write to a file
//  fstream - a combo of ifstream and ofstream , can perfor CURD operations on file


int main(){
    ofstream myfile("demo.txt");    // creating a file named demo.txt and opening it

    myfile<<"file handling is tricky, but you can do some fun stuff too.";  //writing to the myfile.txt
    
    myfile.close();     //closing the file

    return 0;   
}