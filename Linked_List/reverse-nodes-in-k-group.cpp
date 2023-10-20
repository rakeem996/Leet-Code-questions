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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head) return head;

        int n=0;
        for(ListNode* temp=head;temp!=NULL; temp = temp->next) n++;

        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* next;

        for(int j=0; j<n/k; j++)
        {
            curr = prev->next;
            next = curr->next;
            for(int i=0; i<k-1; i++)
            {
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;

            }

            prev = curr;
        }

        return dummy->next;
    }
};