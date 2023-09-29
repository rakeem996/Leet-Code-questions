/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here

    int n = arr.size();

    Node* head = new Node();

    if(n == 0) return head;

    head -> data = arr[0];

    Node* temp = head;

    int i = 1;

    while(i<n)
    {
        Node* newNode = new Node(arr[i],NULL,temp);
        temp -> next = newNode;
        temp = temp -> next;
        i++;
    }

    return head;
}
