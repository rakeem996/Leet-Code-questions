/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here

    // 1 <-> 2 <-> 3     next2prev <-> 1NULL

    if(head == NULL || head->next == NULL) return head;

    Node* curr = head;
    Node* nextNode = head->next;

    while(curr != NULL && nextNode != NULL)
    {
        curr -> next  = curr -> prev;
        curr -> prev = nextNode;
        curr = nextNode;
        nextNode = nextNode->next;
    }

    head = curr;
    head -> next = head -> prev;
    head -> prev = NULL;

    // currNode -> next = currNode -> prev;
    // currNode -> prev = NULL;

    // head = currNode;

    return head;



}

