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
    ListNode *ans, *ptr1, *ptr2, *nn, *st;

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ans = new ListNode(0, NULL);
        st = ans;
        ptr1 = list1;
        ptr2 = list2;

        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1->val <= ptr2->val) {
                nn = new ListNode(ptr1->val, NULL);
                ans->next = nn;
                ans = ans->next;
                ptr1 = ptr1->next;
            }
            else {
                nn = new ListNode(ptr2->val, NULL);
                ans->next = nn;
                ans = ans->next;
                ptr2 = ptr2->next;
            }
        }
        while (ptr1 != NULL) {
            nn = new ListNode(ptr1->val, NULL);
            ans->next = nn;
            ans = ans->next;
            ptr1 = ptr1->next;
        }
        while (ptr2 != NULL) {
            nn = new ListNode(ptr2->val, NULL);
            ans->next = nn;
            ans = ans->next;
            ptr2 = ptr2->next;
        }
        return st->next;
    }   
};