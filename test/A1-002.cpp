#include <iostream>
using namespace std;

int main(){
    int num, ten = 0, five = 0, two = 0, one = 0;
    cin>> num;
    int remain = num;
    ten += remain / 10;
    remain -= ten * 10;
    five += remain / 5;
    remain -= five * 5;
    two += remain / 2;
    remain -= two * 2;
    one += remain / 1;
    cout<< 10<<" = "<<ten<<endl;
    cout<< 5<<" = "<<five<<endl;
    cout<< 2<<" = "<<two<<endl;
    cout<< 1<<" = "<<one<<endl;
    return 0;
}