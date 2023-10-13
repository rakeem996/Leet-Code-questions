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
    ListNode* merge(ListNode* p, ListNode* q)
    {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        while(p != NULL && q!= NULL)
        {
            if(p->val < q->val)
            {
                curr->next = p;
                p = p->next;
            }
            else
            {
                curr->next = q;
                q = q->next;
            }

            curr = curr->next;
        }

        if(p != NULL)
        {
            curr->next = p;
            p = p->next;
            curr = curr->next;
        }

        if( q!= NULL)
        {
            curr->next = q;
            q = q->next;
            curr = curr->next;
        }

        return head->next;
    }

    ListNode* mergeSort(ListNode* head)
    {
        if(head == NULL || head->next == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;

        while(fast != NULL && fast->next != NULL)
        {
            temp = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        temp->next = NULL;
        ListNode* p = mergeSort(head);
        ListNode* q = mergeSort(slow);

        return merge(p,q);

    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};