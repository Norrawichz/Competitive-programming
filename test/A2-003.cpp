#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 1 || N > 1000) return 0;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
        if (H[i] < 1 || H[i] > 1000000) return 0;
    }

    int count = 0;
    for (int i = 0; i < N - 2; i++) {
        int num1 = H[i];
        int num2 = H[i + 1];
        int num3 = H[i + 2];

        if (num2 > num1 && num2 > num3) {
            count++;
        }
        else if (i == 0) {
            if (num1 > num2) {
                count++;
            }
        }
        else if (i == N-3) {
            if (num3 > num2) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
