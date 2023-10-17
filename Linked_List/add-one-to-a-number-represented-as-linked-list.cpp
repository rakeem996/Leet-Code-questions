/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addOne(Node *head)
{
    // Write Your Code Here.
    //reversing the LL

    if(head == NULL) return head;

    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    Node* ptr = head;
    int carry = 0;
    while(ptr != NULL)
    {
        int val = ptr->data + carry;
        if(ptr == head) val = val+1;
        carry = val/10;
        ptr->data = val%10;
        if(ptr->next == NULL && carry)
        {
            Node* newNode = new Node(carry);
            ptr->next = newNode;
            break;
        }
        ptr = ptr->next;
    }



    //reverse again
    prev = NULL;
    curr = head;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}
