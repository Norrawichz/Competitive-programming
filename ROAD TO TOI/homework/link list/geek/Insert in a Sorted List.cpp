/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node *ptr, *prv, *st;
        ptr = head;
        
        st = new Node(0);
        st->next = head;
        prv = st;
        
        while (ptr != NULL) {
            if (ptr->data > key) break;
            prv = ptr;
            ptr = ptr->next;
        }
        
        Node *tem;
        tem = new Node(key);
        
        prv->next = tem;
        prv->next->next = ptr;
        return st->next;
    }
};