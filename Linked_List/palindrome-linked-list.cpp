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
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL) return 1;

        ListNode* newHead = NULL;
        ListNode* temp = head;
        while(temp != NULL)
        {
            ListNode* newEle = new ListNode(temp->val);
            newEle->next = newHead;
            newHead = newEle;
            temp = temp->next;
        }

        while(head && newHead)
        {
            if(head->val != newHead->val) return false;

            head = head->next;
            newHead = newHead->next;
        }

        return true;
    }
};