#include <bits/stdc++.h>
using namespace std;

vector<int> heap;

int par(int size) {
    return (size-1)/2;
}

int l(int cur) {
    return cur*2+1;
}

int r(int cur) {
    return cur*2+2;
}

void insert(int key) {
    heap.push_back(key);
    int cur=heap.size()-1;
    while (cur > 0) {
        if (heap[par(cur)] < heap[cur]) {
            int tem=heap[par(cur)];
            heap[par(cur)] = heap[cur];
            heap[cur] = tem;
            cur = par(cur);
        }
        else break;
    }
}

void mninsert(int key) {
    heap.push_back(key);
    int cur=heap.size()-1;
    while (cur > 0) {
        if (heap[par(cur)] > heap[cur]) {
            int tem=heap[par(cur)];
            heap[par(cur)] = heap[cur];
            heap[cur] = tem;
            cur = par(cur);
        }
        else break;
    }
}

void heapify(int i=0) {
    int mn=i;

    if (l(i) < heap.size() && heap[mn] > heap[l(i)]) mn=l(i);
    if (r(i) < heap.size() && heap[mn] > heap[r(i)]) mn=r(i);

    if (i==mn) return;

    swap(heap[i], heap[mn]);
    heapify(mn);
}

int pop() {
    int ans = heap[0];

    if (heap.size() == 0) return 0;
    swap(heap[0], heap[heap.size()-1]);
    heap.pop_back();
    heapify();

    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    mninsert(2);
    mninsert(10);
    mninsert(6);
    mninsert(8);
    mninsert(9);
    cout<< pop();
    cout<< pop();

}