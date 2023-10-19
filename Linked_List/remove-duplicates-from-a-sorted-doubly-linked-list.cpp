/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // Write your code here
    if(!head || !head->next) return head;

    Node* ptr1 = head;
    Node* ptr2 = head->next;

    while(ptr1 && ptr2)
    {
        if(ptr1->data == ptr2->data){
            ptr2 = ptr2->next;
            continue;
        }

        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = ptr2->next;
    }

    ptr1->next = NULL;
    return head;
}
