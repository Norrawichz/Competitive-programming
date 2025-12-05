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
    ListNode *ptr1, *ptr2, *st, *ptr3, *ptr4;
    int mark1, mark2;
    ListNode* swapNodes(ListNode* head, int k) {
        st = new ListNode(0, head);

        int num = 0;
        ptr1 = head;
        ptr2 = head;
        while (ptr1 != NULL) {
            num++;
            if (num == k) {
                mark1 = ptr1->val;
                ptr3 = ptr1;
            }
            ptr1 = ptr1->next;
        }

        while (num >= k) {
            num--;
            mark2=ptr2->val;
            ptr4 = ptr2;

            ptr2 = ptr2->next;
        }

        ptr3->val = mark2;
        ptr4->val = mark1;
        return head;
    } 
};