#include <iostream>
using namespace std;

int main(){
    int n, a, b, sum = 0;
    cin>> n;
    int arr[n];
    for (int i = 0; i<n; i++) {
        int x; cin>> x;
        arr[i] = x;
    }

    cin>> a>> b;
    for (int i = a-1; i<b; i++) {
        sum += arr[i];
    }
    cout<< sum;
    return 0;
}