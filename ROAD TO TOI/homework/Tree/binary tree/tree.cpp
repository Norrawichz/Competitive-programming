#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
    node (int num) : data(num), left(nullptr), right(nullptr) {}
};

void level_order(node *root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node *cur = q.front();
        q.pop();

        cout<< cur->data<< '\n';
        if (cur->left != NULL) {
            q.push(cur->left);
        }
        if (cur->right != NULL) {
            q.push(cur->right);
        }
    }
}

void preorder(node *root) {
    if (root == NULL) return;

    cout<< root->data<< '\n';
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root) {
    if (root == NULL) return;

    inorder(root->left);
    cout<< root->data<< '\n';
    inorder(root->right);
}

void insert(node *cur, int key) {
    if (cur == nullptr) {
        cur = new node(key);
    }

    if (key > cur->data) {
        if (cur->right == nullptr) {
            cur->right = new node(key);
            return;
        }
        else insert(cur->right, key);
    }
    else {
        if (cur->left == nullptr) {
            cur->left = new node(key);
            return;
        }
        else insert(cur->left, key);
    }
}

node* insert2(node *cur, int key) {
    if (cur == nullptr) return new node(key);
    if (key > cur->data) cur->right = insert2(cur->right, key);
    else cur->left = insert2(cur->left, key);
    return cur;
}

bool search(node *cur, int key) {
    if (cur == nullptr) return false;
    if (cur->data == key) return true;

    if (key > cur->data) return search(cur->right, key);
    else return search(cur->left, key);
}

node* getmostright(node *cur) {
    while (cur->right != nullptr) {
        cur = cur->right;
    }
    return cur;
}


node* del(node *cur, int key) {
    if (key > cur->data) cur->right = del(cur->right, key);
    else if (key < cur->data) cur->left = del(cur->left, key);
    else {
        if (cur->left == nullptr) {
            node *tem = cur->right;
            delete cur;
            return tem;
        }   
        else if (cur->right == nullptr) {
            node *tem = cur->left;
            delete cur;
            return tem;
        }
        else {
            node *tem = getmostright(cur->left);
            cur->data=tem->data;
            cur->left = del(cur->left, tem->data);
        }
    }
    return cur;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    node *root;

    root = new node(10);
    root->left = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(8);

    root->right = new node(12);
    root->right->left = new node(11);
    root->right->right = new node(39);
    root->right->right->left = new node(20);

    //level_order(root);
    root = insert2(root, 9);
    del(root, 12);
    inorder(root);
    //cout<< search(root, 1);

}