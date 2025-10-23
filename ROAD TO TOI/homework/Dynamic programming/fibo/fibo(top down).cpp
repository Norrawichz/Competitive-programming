#include <bits/stdc++.h>
using namespace std;

int fibo(int a, vector<int> &mem) {
    if (a<=1) {
        return a;
    }
    if (mem[a] != -1) return mem[a];
    return mem[a] = fibo(a-1, mem) + fibo(a-2, mem); 
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>> n;

    /*vector<int> mem(n+1, -1);
    cout<< fibo(n, mem);*/


    /*vector<int> dp(n+1, 0);

    dp[0]=0;
    dp[1]=1;
    for (int i=2; i<=n; i++) dp[i] = dp[i-1]+dp[i-2];
    cout<< dp[n];*/

    vector<int> dp(3, 0);
    dp[0]=0;
    dp[1]=1;
    for (int i=2; i<=n; i++) dp[i%3] = dp[(i-1)%3] + dp[(i-2)%3];
    cout<< dp[n%3];
}