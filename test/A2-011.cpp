#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    vector<int> uniqueNumbers;
    for (int i = 0; i < 10; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueNumbers.size(); j++) {
            if (arr[i] == uniqueNumbers[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueNumbers.push_back(arr[i]);
        }
    }
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
    return 0;
}
