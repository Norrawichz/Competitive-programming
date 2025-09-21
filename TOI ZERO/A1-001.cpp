#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstname, lastname;
    cin>> firstname;
    cin>> lastname;
    cout<< "Hello "<< firstname<< " "<< lastname<< endl;
    cout<< firstname.substr(0, 2)<< lastname.substr(0, 2);
    return 0;
}