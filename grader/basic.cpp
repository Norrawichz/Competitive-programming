#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>> a>> b;
    cout<< a + b<< endl;
    cout<< a - b<< endl;
    cout<< a * b<< endl;
    if (b != 0) {
        cout<< a/b<< endl;
    }
    else {
        cout<< "undefined"<<endl;
    }
    printf("%.2f\n",sqrt(abs(a*b)));
    printf("%.2f\n",floor(abs(a+b)));
    printf("%.2f\n",ceil(a-b));
    return 0;
}