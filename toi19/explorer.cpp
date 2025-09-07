#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;

void bt(vector<set<int>> &graph, set<int> &visited, int count, int node) {
    if (count == n) {
        ans++;
        return;
    }

    for (auto x : graph[node]) {
        if (visited.find(x) == visited.end())
            bt(graph, visited, ++count, x);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>> n;
    vector<set<int>> graph(n+1);
    set<int> visitedinput;
    set<int> visited;
    while (true) {
        int x, y, yy = 0;
        cin>> x>> y;
        if (visitedinput.size() == n && (x == 1 || y == 1)) {
            break;
        }
        yy = y;
        if (y != 0) {
            graph[x].insert(y);
            graph[y].insert(x);
        }
        visitedinput.insert(x);
        visitedinput.insert(y);
    }
    bt(graph, visited, 1, 1);
    cout<< ans;
}