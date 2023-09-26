/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* curr = new Node();
    Node* head = curr;
    curr->data = arr[0];
    curr->next = NULL;

    for(int i=1; i<arr.size(); i++)
    {
        Node* newNode = new Node();
        newNode->data = arr[i];
        curr->next = newNode;
        curr = newNode;
    }

    return head;


}