#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> p;
    p.push({4, 5, 1});
    p.push({4, 5, 0});
    p.push({2, 4, 1});
    p.push({4, 3, 1});

    tuple<int,int,int> top = p.top();
    int a = get<0>(top);
    int b = get<1>(top);
    int c = get<2>(top);

    cout << a << " " << b << " " << c << "\n";
    return 0;
}
