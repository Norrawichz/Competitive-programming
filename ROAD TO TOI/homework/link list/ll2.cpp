#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void print(Node *ptr) {
    while (ptr != NULL) {
        cout<< ptr->data<< ' ';
        ptr = ptr->next;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    Node *head, *ptr, *temp;
    head = new Node;
    head->next = NULL;

    ptr = head;

    int n;
    cin>> n;

    for (int i=0; i<n; i++) {
        int nn;
        cin>> nn;

        temp = new Node;
        temp->data = nn;
        temp->next = NULL;

        ptr->next = temp;
        ptr = temp;
    }

    print(head->next);
}