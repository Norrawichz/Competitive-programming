/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *ptr2, *prv, *st;
    
    void del(int n, ListNode *ptr) {
        int num=0;
        while (ptr != NULL) {
            num++;
            ptr=ptr->next;
        }

        ptr = st->next;
        prv = st;
        while (num > n) {
            num--;
            prv=ptr;
            ptr=ptr->next;
        }
        ptr2 = ptr;
        prv->next = ptr->next;
        delete ptr2;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        st = new ListNode(0, head);
        del(n, st->next);
        return st->next;
    }
};