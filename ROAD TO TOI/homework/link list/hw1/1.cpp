#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int num) : data(num), next(nullptr) {}
};

Node *head, *ptr, *temp;

void print(Node *ptr) {
    while (ptr != NULL) {
        cout<< ptr->data<< ' ';
        ptr = ptr->next;
    }
}

void initial() {
    head = new Node(0);
    ptr = head;
}

void push_back(int n) {
    temp = new Node(n);

    ptr->next = temp;
    ptr = temp;
} 

int main() {
    initial();
    push_back(7);
    print(head->next);
}