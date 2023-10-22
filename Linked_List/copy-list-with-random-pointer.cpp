/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(!head) return NULL;

        Node* ptr = head;
        
        Node* newHead = new Node(0);
        Node* temp = newHead;

        unordered_map<int,Node*> mp;
        int k=0;
        while(ptr)
        {
            Node* newNode = new Node(ptr->val);
            temp->next = newNode;
            temp = temp->next;
            ptr = ptr->next;
            mp[k]=ptr->random;
            k++;
        }

        newHead = newHead->next;
        temp = newHead;
        ptr = head;

        while(temp && ptr)
        {
            if(ptr->random != NULL)
            {
                Node* ptr2 = head;
                int i=0;
                while(ptr2 && ptr2 != ptr->random)
                {
                    ptr2 = ptr2->next;
                    i++;
                }

                Node* ptr3 = newHead;
                while(i>0)
                {
                    i--;
                    ptr3 = ptr3->next;
                }
                temp->random = ptr3;
            }
            ptr = ptr->next;
            temp = temp->next;
        }

        return newHead;
    }
};