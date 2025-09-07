#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    int k; 
    cin >> n >> k;
    vector<int> a(n);
    int mn = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] < mn){
            mn = a[i];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        int c = a[i]; 
        if (c == mn){
            ans++;
            continue; 
        }
        int diff = c - mn; 
        if ((c + diff - 1) / diff > k)
            ans++;
        
    }
    cout << ans;
}