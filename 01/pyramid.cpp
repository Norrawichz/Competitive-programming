#include <iostream>
using namespace std;

int main(){
    int n, q, p;
    cin >> n;
    int arr[n];
    arr[0] = 0;
    for (int i = 1; i<=n; i++) {
        int x;
        cin>> x;
        arr[i] = arr[i-1] + x;
    }
    cin >> q>> p;
    cout<< arr[p] - arr[q-1];
    return 0;
}