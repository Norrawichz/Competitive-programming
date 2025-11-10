#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,t;
    cin>> n>> t;

    unordered_map<int,int> m;
    for (int i=0; i<t; i++) {
        int g, id;
        cin>> g>> id;
        m[id] = g;
    }
    vector<int> q;

    vector<int> pos(n+1, -1);
    int cur=0;

    while (true) {
        char c;
        cin>> c;
        if (c=='X') break;
        else if (c == 'E') {
            int id;
            cin>> id;
            if (pos[m[id]] == -1) {
                q.push_back(id);
                pos[m[id]] = q.size();
            }
            else {    
                q.insert(q.begin() + pos[m[id]], id);
                for (int i=1; i<=n; i++) if (pos[i] >= pos[m[id]]) pos[i]++;
            }
        }
        else if (c=='D') {
            if (pos[m[q[cur]]]-1 == cur) pos[m[q[cur]]] = -1;
            cout<<q[cur]<<'\n';
            cur++;
        }
    }
    cout<< 0;
}