#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float n;
    cin>> n;
    int row = ceil(sqrt(n)), count = 1;
    int num = n;
    if (row % 2 == 0) {
        if (num % 2 == 0) {
            count += 2*(row - 2) + 1;
        }
        else {
            count += 2*(row - 2);
        }   
    }
    else {
        if (num % 2 == 0) {
            count += 2*(row - 2);
        }
        else {
            count += 2*(row - 2) + 1;
        }
    }
    cout<< count;
    return 0;
}