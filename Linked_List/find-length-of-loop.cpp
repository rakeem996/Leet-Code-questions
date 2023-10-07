/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here

    if(head == NULL) return 0;

    Node* back = head;
    Node* front = head;

    int count = 0;
    while(front->next != NULL && front->next->next != NULL)
    {
        back = back->next;
        front = front->next->next;
        if(back == front)
        {
            front = front->next;
            while(back != front)
            {
                front = front->next;
                count++;
            }

            return count+1;

        }
    }

    return count;

    
}
