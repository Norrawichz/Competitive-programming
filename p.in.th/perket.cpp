#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin>> n;
  int sums = 1, sumw = 0;
  int arr1[n], arr2[n];
  for (int i = 0; i< n; i++) {
    cin>> arr1[i]>>arr2[i]; 
  }
  int mn = 10000000;
  for (int i = 0; i<n ;i++) {
    sums = arr1[i];
    sumw = arr2[i];
    mn = min(abs(sums - sumw), mn);
    for (int j = 0; j<n; j++) {
      if (i != j) {
        sums *= arr1[j];
        sumw += arr2[j];
        mn = min(abs(sums - sumw), mn);
      }
    }
  }
  cout<< mn;
  return 0;
}