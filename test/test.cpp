#include <iostream>
using namespace std;

int main() {
    cout>> "Enter year : ";
    int year;
    cin>> year;

    //เปลี่ยนเป็น พ.ศ.
    year+=543;

    int sum = 0;
    // 2567 -> 2567/100 -> 25 
    // 2+5+6+7 = 20
    sum += year/1000; // หลักแรก

    sum += (year/100)%10; // หลักสอง

    sum += (year/10)%10; //256%10

    sum += year%10;

    cout<< sum;

}