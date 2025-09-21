#include <iostream>
using namespace std;

int main() {
    string name, lastname, age;
    cin>> name>> lastname>> age;
    if (name.size() > 5 && lastname.size() > 5) {
        cout<< name.substr(0,2)<< lastname[lastname.size() - 1]<< age[age.size()-1];
    }
    else {
        cout<< name[0]<< age<< lastname[lastname.size() - 1];
    }
    return 0;
}