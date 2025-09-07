#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    int mx = 0;
    int count = 0;
    for (int i = 0; i<n; i++) {
        int x;
        cin>> x;
        if (x > mx) {
            mx = x;
            count = 1;
        }
        else if (x == mx) count++;
        else continue; 
    }
    cout<<mx<<endl<< count;
    return 0;
}