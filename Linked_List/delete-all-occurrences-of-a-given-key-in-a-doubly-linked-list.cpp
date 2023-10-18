/**
 * Definition of doubly linked list:
 *
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

Node* deleteAllOccurrences(Node* head, int k) {
    // Write your code here

        if (head == NULL)
        return head;

    Node *temp = head;
    while (temp != NULL) {
        if (temp -> data == k) {
            Node *temp2 = temp;

            if (temp -> prev != NULL)
                temp -> prev -> next = temp -> next;
            if (temp -> next != NULL)
                temp -> next -> prev = temp -> prev;

            if (temp == head)
                head = head -> next;
            temp = temp -> next;

            delete temp2;
        } else
            temp = temp -> next;
    }

    return head;
}
