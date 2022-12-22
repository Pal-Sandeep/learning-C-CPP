//Access Specifier
//  Public
//  Private
//  Proctected
#include<iostream>
using namespace std;
// By Default all class member are private 
class AccessSpecifier{
    
    public:                 //class member can be accessed by outside of the class
        string pname = "First Player";

    private:                 //class member can not be accessed and viewd by outside of the class
        int pnumber = 9809809809;

    protected:                 //class member can be accessed by outside of the class
        string address = "Bhot dur hai";
};

int main(){
    AccessSpecifier Ashok;
    cout<<"Name of first Player: "<<Ashok.pname;

    //you'll see following errors with protected 
    cout<<"Contact Number of the Player: "<<Ashok.pnumber;//"message": "member \"PublicClass::pnumber\" (declared at line 13) is inaccessible",
		
	//you'll see following errors with protected 
    cout<<"Address of the Player"<<Ashok.address; //"message": "member \"PublicClass::address\" (declared at line 16) is inaccessible",
 
    return 0;
}

