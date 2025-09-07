#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int max_count = 1, current_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++;
        } else {
            max_count = max(max_count, current_count);
            current_count = 1;
        }
    }
    max_count = max(max_count, current_count);
    cout << max_count;
    return 0;
}