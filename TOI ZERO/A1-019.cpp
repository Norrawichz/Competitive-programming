#include <iostream>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i<3; i++){
        cin>> arr[i];
    }

    int same = 0;
    for (int i = 1; i<3; i++) {
        if (arr[i] == arr[0]) {
            same++;
        }
    }
    if (same == 2) cout<<"all the same";
    else if (same == 1) cout<<"neither";
    else cout<< "all different";
    return 0;
}