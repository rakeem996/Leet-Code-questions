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
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* head = new ListNode();
        ListNode* ptr = head;

        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                ptr->next = l1;
                l1 = l1->next;
            }
            else
            {
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }

        if(l1)
        {
            ptr->next = l1;
            l1 = l1->next;
        }
        if(l2)
        {
            ptr->next = l2;
            l2 = l2->next;
        }

        return head->next;
    }

    ListNode* mergeSort(ListNode* head)
    {
        if(!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;

        while(fast && fast->next)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = NULL;

        ListNode* p = mergeSort(head);
        ListNode* q = mergeSort(slow);
        
        return merge(p,q);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.empty()) return NULL;

        ListNode* head = new ListNode();
        int i=0;
        ListNode* temp = head;

        while(i<lists.size())
        {
            while(temp->next) temp = temp->next;
            temp->next = lists[i];
            i++;
        }

        return mergeSort(head->next);

    }
};