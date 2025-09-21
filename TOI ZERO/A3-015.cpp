#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int N;
    scanf('%d', N);
    int arr[N];
    for (int i = 0; i<N; i++) {
        cin>> arr[i];
    }
    for (int i = 0; i<N; i++) {
        for (int j = i; j<N; j++) {
            if (arr[i] > arr[j]) {
                int x = arr[j];
                arr[j] = x;
                arr[j] = arr[i];
                arr[i] = x;
            }
        }
    }
    int length = 0, current = 0;
    for (int i = 0; i<N; i++) {
        current += arr[i];
        length += current * 2;
    }
    cout<< length;
}