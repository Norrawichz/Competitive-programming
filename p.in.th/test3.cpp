#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<pair<int,int>> q;
    q.push({1,2});
    q.push({3,4});
    q.pop();
    cout<< q.front().first;
    return 0;
}