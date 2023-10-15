/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
Node* merge(Node* p, Node* q)
{
    Node* head = new Node();
    Node* res = head;

    while(p != NULL && q != NULL)
    {
        if(p->data < q->data)
        {
            res->next = p;
            p = p->next;
        }
        else
        {
            res->next = q;
            q = q->next;
        }

        res = res->next;
    }

    if(p != NULL)
    {
        res->next = p;
    }
    if(q != NULL)
    {
        res->next = q;
    }

    return head->next;
}

Node* mergeSort(Node* head)
{
    if(head->next == NULL || head == NULL) return head;

    Node* n1 = head;
    Node* n2 = head;
    Node* temp = NULL;

    while(n2 != NULL && n2->next != NULL)
    {   
        temp = n1;
        n1 = n1->next;
        n2 = n2->next->next;
    }

    temp->next = NULL;

    Node* p = mergeSort(head);
    Node* q = mergeSort(n1);

    return merge(p,q);
}

Node* sortList(Node *head){
    // Write your code here.

    return mergeSort(head);
}