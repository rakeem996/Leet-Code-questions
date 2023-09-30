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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        ListNode* l = head;
        ListNode* r = l->next;
        int ele = 101;
        while(l != NULL && r != NULL)
        {
            if(l->val == r->val)
            {
                l->next = r->next;
                r = r->next;
            }
            else
            {
                l = r;
                r = r->next;
            }
        }

        return head;
    }
};