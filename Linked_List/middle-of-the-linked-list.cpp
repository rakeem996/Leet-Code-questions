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
    ListNode* middleNode(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head;

        int i=0;

        while(temp != NULL)
        {
            i++;
            temp = temp->next;
        }

        temp = head;

        int pt = i/2;

        i=0;
        while(temp != NULL)
        {
            if(i == pt) return temp;
            temp = temp->next;
            i++;
        }

        return head;

        
        
    }
};