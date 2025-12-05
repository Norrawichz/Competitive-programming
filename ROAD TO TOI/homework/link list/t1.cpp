#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};


int main() {
    cin.tie(0)->sync_with_stdio(0);

    Node *ptr1, *ptr2, *ptr3, *ptr;
    ptr1 = new Node;
    ptr1->data = 52;
    ptr1->next = NULL;

    ptr2 = new Node;
    ptr2->data = 60;
    ptr2->next = NULL;

    ptr3 = new Node;
    ptr3->data = 70;
    ptr3->next = NULL;

    ptr1->next = ptr2;
    ptr2->next = ptr3;
    //ptr3->next = ptr1;
    ptr = ptr1;
    while (ptr != NULL) {
        cout<< ptr->data<< ' ';
        ptr=ptr->next;
    }
}