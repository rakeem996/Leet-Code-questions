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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL || head->next->next == NULL) return head;

        ListNode* i = head;
        ListNode* j = head->next;

        while(j != NULL && j->next != NULL)
        {
            ListNode* temp = i->next;
            i->next = j->next;
            j->next = j->next->next;
            i->next->next = temp;

            i = i->next;
            j = j->next;
        }

        return head;
    }
};