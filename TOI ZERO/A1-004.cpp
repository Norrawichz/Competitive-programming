#include <iostream>
using namespace std;

int main() {
    int ex, mid, final;
    cin>> ex;
    cin>> mid;
    cin>> final;
    bool pass = false;
    if (ex >= 5 and mid >= 20 and final >= 25) pass = true;
    if (pass) cout<< "pass";
    else cout<< "fail";
    return 0;
}