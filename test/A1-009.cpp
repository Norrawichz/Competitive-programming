#include <iostream>
using namespace std;

int main() {
    int mid, final;
    cin>> mid;
    cin>> final;
    int sum = mid + final;
    cout<< sum<< endl;
    if (sum >= 50) cout<< "pass";
    else cout<< "fail";
    return 0;
}