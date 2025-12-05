#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int num) : data(num), next(nullptr) {}
};

Node *head, *ptr, *temp, *ptr2, *prv;

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

void push_front(int n) {
    temp = new Node(n);

    temp->next = head->next;
    head->next = temp;
} 

void pop_front() {
    ptr2 = head->next;
    head->next = head->next->next;
    delete ptr2;
}

void pop_back() {
    ptr2 = head->next;

    if (ptr2->next == NULL) {
        head->next = NULL;
        delete ptr2->next;
    }

    while (ptr2->next != NULL) {
        prv=ptr2;
        ptr2 = ptr2->next;
    }
    prv->next = NULL;
    delete ptr2;
}

void deln(int n, Node *ptr) {
    ptr =head->next;

    int num=0;
    while (ptr != NULL) {
        num++;
        ptr=ptr->next;
    }

    ptr = head->next;
    prv = head;
    while (num > n) {
        num--;
        prv=ptr;
        ptr=ptr->next;
    }
    ptr2 = ptr;
    prv->next = ptr->next;
    delete ptr2;
}

int cnt(Node *ptr) {
    int num=0;
    while (ptr != NULL) {
        num++;
        ptr=ptr->next;
    }
    return num;
}

void del(Node *ptr, int n) {
    prv = head;
    while (n--) {
        prv = ptr;
        ptr=ptr->next;
    }
    prv->next = ptr->next;
    delete ptr;
}

int main() {
    initial();

    push_back(1);
    //push_back(2);
    //push_back(3);
    //push_back(4);
    //push_back(5);
    int n =cnt(head->next)/2;
    //deln(1, head->next);
    del(head->next, n);
        

    print(head->next);
}