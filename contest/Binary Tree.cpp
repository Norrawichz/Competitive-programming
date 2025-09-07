#include <bits/stdc++.h>
using namespace std;

struct node {
    int parent = -1;
    int left = -1;
    int right = -1;
};

int getSibling(int i, const vector<node>& tree) {
    int p = tree[i].parent;
    if (p == -1) return -1;
    if (tree[p].left != -1 && tree[p].left != i) return tree[p].left;
    if (tree[p].right != -1 && tree[p].right != i) return tree[p].right;
}

int getDepth(int i, const vector<node>& tree) {
    int d = -1;
    while (i != -1) {
        i = tree[i].parent;
        d++;
    }
    return d;
}

int getHeight(int i, const vector<node>& tree) {
    int h1 = 0, h2 = 0;
    if (tree[i].left != -1) h1 = getHeight(tree[i].left, tree) + 1;
    if (tree[i].right != -1) h2 = getHeight(tree[i].right, tree) + 1;
    return max(h1, h2);
}

string getType(int i, const vector<node>& tree) {
    if (tree[i].parent == -1) return "root";
    if (tree[i].left == -1 && tree[i].right == -1) return "leaf";
    return "internal node";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;
    vector<node> tree(n);
    for (int i = 0; i<n; i++) {
        int id, left, right;
        cin>> id>> left>> right;
        tree[id].left = left;
        tree[id].right = right;
        if (left != -1) tree[left].parent = id;
        if (right != -1) tree[right].parent = id;
    }
    
    for (int i = 0; i<n; i++) {
        int parent = tree[i].parent;
        int sibling = getSibling(i, tree);
        int degree = 0;
        if (tree[i].left != -1) degree++;
        if (tree[i].right != -1) degree++;
        int depth = getDepth(i, tree);
        int height = getHeight(i, tree);
        string type = getType(i, tree);

        cout<< "node "<<i;
        cout<<": parent = "<< parent;
        cout<<", sibling = "<< sibling;
        cout<<", degree = "<< degree;
        cout<<", depth = "<< depth;
        cout<<", height = "<< height;
        cout<<", "<< type<<endl;
    }
}