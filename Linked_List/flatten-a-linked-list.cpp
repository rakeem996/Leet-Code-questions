#include<iostream>
using namespace std;

class Node {
   public:
 		int data;
 		Node *next;
  		Node *child;
 		Node() : data(0), next(nullptr), child(nullptr){};
 		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 };


Node* merge(Node* p, Node* q)
{
	Node* head = new Node();
	Node* ptr = head;

	while(p && q)
	{
		if(p->data<=q->data)
		{
			ptr->child = p;
			p = p->child;
		}
		else{
			ptr->child = q;
			q = q->child;
		}
		ptr = ptr->child;
	}

	if(p)
	{
		ptr->child = p;
		ptr = ptr->child;
	}

	if(q)
	{
		ptr->child = q;
		ptr = ptr->child;
	}

	return head->child;
}

Node* mergeSort(Node* head)
{
	if(!head || !head->child) return head;

	Node* slow = head;
	Node* fast = head;
	Node* temp = NULL;

	while(fast && fast->child)
	{
		temp = slow;
		slow = slow->child;
		fast = fast->child->child;
	}

	temp->child = NULL;

	Node* p=mergeSort(head);
	Node* q=mergeSort(slow);

	return merge(p,q);

}

Node* flattenLinkedList(Node* head) 
{
	if(!head) return head;

	Node* nextBranch = NULL;

	Node* ptr = head;

	while(ptr)
	{
		nextBranch = ptr->next;
		Node* temp;
		for(temp=ptr; temp->child != NULL; temp = temp->child);
		temp->child = nextBranch;
		ptr->next = NULL;
		ptr = nextBranch;
	}

	return mergeSort(head);
	// return head;

}


