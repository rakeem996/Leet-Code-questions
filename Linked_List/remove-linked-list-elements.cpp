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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL) return head;

        ListNode* newNode = new ListNode();

        newNode->next = head;
        head = newNode;

        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;

        while(ptr1 && ptr2)
        {
            if(ptr2->val == val)
            {
                ptr1->next = ptr2->next;
                ptr2 = ptr2->next;
                continue;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return head->next;
    }
};