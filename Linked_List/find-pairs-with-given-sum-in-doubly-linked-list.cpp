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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    if(!head || !head->next) return {};

    Node* curr = head;
    Node* fwd = head->next;
    vector<pair<int,int>> res;

    while(curr->next)
    {
        if(fwd == NULL || curr->data+fwd->data > k)
        {
            curr = curr->next;
            fwd = curr->next;
            continue;
        }

        if(curr->data >= k) break;

        if(curr->data+fwd->data == k)
        {
            res.push_back({curr->data,fwd->data});
            curr = curr->next;
            fwd = curr->next;
            continue;
        }

        fwd = fwd->next;
    }


    return res;
}
