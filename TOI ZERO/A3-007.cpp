#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l, n;
    cin>> l>> n;

    int i = 1;
    int layer = 0;
    int current = 0;
    while (current < n) {
        current += l * i + (l * (l-1))/2;
        i += l;
        layer++;
    }
    cout<< layer;
    return 0;
}