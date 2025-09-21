#include <iostream>
using namespace std;

int main() {
    string num, sign;
    cin>> num>> sign;
    string reverse = "aa";

    reverse[num.size() - 1] = num[num.size() - 2];
    reverse[num.size() - 2] = num[num.size() - 1];
    int n = (num[0] - '0') * 10 + (num[1] - '0');
    int r = (reverse[0] - '0') * 10 + (reverse[1] - '0');
    int result = 0;
    if (sign == "+") {
        result = n + r;
        cout<<n<<" + "<<r<<" = "<< result;
    }
    else if (sign == "*") {
        result = n * r;
        cout<<n<<" * "<<r<<" = "<< result;
    }
    
    return 0;
}