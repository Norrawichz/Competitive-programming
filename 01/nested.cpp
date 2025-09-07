#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[11];

    for (int i = 0; i < 11; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int nums;
        cin>> nums;
        arr[nums]++;
    }

    for (int i = 0; i< 11; i++){
        if (arr[i] != 0){
            cout << i << ": " << arr[i] << " time(s)"<< endl;
        }
    }
    return 0;
}