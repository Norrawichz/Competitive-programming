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
    ListNode *st, *prv;

    int cnt(ListNode *ptr) {
        int num=0;
        while (ptr != NULL) {
            num++;
            ptr=ptr->next;
        }
        return num;
    }

    void del(ListNode *ptr, int n) {
        prv = st;
        while (n--) {
            prv = ptr;
            ptr=ptr->next;
        }
        prv->next = ptr->next;
        delete ptr;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL) return nullptr;
        st = new ListNode(0, head);

        int n=cnt(st->next)/2;
        del(st->next, n);
        return st->next;
    }
};