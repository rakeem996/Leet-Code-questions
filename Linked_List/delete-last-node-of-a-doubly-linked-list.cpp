/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here

    if(head == NULL) return head;

    if(head -> next == NULL) // 1
    {
        head = NULL;
        return head;
    }

    Node* temp = head;

    while(temp -> next -> next != NULL)  //1 2 3 4
    {
        temp = temp -> next;
    }

    temp -> next = NULL;

    return head;
}
