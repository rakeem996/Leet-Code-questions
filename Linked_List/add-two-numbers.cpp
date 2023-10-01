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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        ListNode* head = new ListNode();

        ListNode* temp = head;

        int carry = 0;

        while(l1 != NULL|| l2 != NULL || carry != 0)
        {
            int l1val = l1 == NULL ? 0 : l1->val;
            int l2val = l2 == NULL ? 0 : l2->val;

            int num = (l1val+l2val+carry)%10;

            ListNode* newNode = new ListNode(num);
            temp->next = newNode;
            temp = newNode;

            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;

            carry = (l1val+l2val+carry)/10;
        }

        // if(carry)
        // {
        //     ListNode* newNode = new ListNode(carry);
        //     temp->next = newNode;
        //     temp = newNode;
        // }

        head = head->next;

        return head;
    }
};