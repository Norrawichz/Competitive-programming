#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>> N;
    vector<int> p(N);
    for (int i = 0; i<N; i++) {
        cin>> p[i];
    }
    set<int> s;
    for (int i = 0; i<N; i++) {
        int sum = 0;
        for (int j = i; j<N; j++) {
            sum += p[j];
            s.insert(sum);
        }
    }
    cout<< s.size();

    return 0;
}