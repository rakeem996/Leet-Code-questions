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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || !head->next || right <= left) return head;
        
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        int i=left;
        
        while(temp && i-1)
        {
            prev = temp;
            temp = temp->next;
            i--;
        }
        
        
        ListNode* dummy = new ListNode(0,temp);
        
        ListNode* curr = temp;
        ListNode* next = NULL;
        
        int len = right-left;
        
        while(len>0 && curr)
        {
            next = curr->next;
            curr->next = curr->next->next;
            next->next = dummy->next;
            dummy->next = next;
            len--;
        }
        
        if(!prev)
        {
            return dummy->next;
        }
        prev->next = dummy->next;
        
        return head;
    }
};