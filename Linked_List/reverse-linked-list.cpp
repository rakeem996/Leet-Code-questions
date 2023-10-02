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
    ListNode* reverseList(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;
        
        ListNode* currPos = head;
        ListNode* nextPos = head->next;
        ListNode* nextnextPos = head->next->next;

        while(nextnextPos != NULL)
        {
            nextPos->next = currPos;
            currPos = nextPos;
            nextPos = nextnextPos;
            nextnextPos = nextnextPos->next;
        }

        head->next = NULL;

        nextPos->next = currPos;

        head = nextPos;
        
        return head;

    }
};