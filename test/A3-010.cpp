#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, T;
    cin>> N>> K>> T;

    int current = 1;
    int count = 1;
    while (true) {
        current += K;
        current = current % (N);
        if (current == 1) {
            break;
        }
        else if (current == T) {
            count++;
            break;
        }
        count++;
    }
    cout<< count;
    return 0;
}