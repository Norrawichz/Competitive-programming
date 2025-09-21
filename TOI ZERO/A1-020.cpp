#include <iostream>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i<3; i++) {
        cin>>arr[i];
    }
    if (arr[0] < arr[1] && arr[1] < arr[2]) {
        cout<< "increasing";
    }
    else if (arr[0] > arr[1] && arr[1] > arr[2]) {
        cout<< "decreasing";
    }
    else {
        cout<< "neither";
    }
    return 0;
}