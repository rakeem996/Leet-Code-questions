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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        // int n=0;
        while(curr)
        {
            // n++;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next) return head;

        //reverse list
        head = reverse(head);

        ListNode* temp = head;
        int n=0;
        for(temp; temp->next!=NULL; temp=temp->next)n++;
        n++;
        int i=k%n;

        while(i>0)
        {
            temp->next = head;
            head = head->next;
            temp = temp->next;
            temp->next = NULL;
            i--;
        }

        head = reverse(head);

        return head;


        
    }
};