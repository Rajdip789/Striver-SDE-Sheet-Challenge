#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node *mergeList(Node *a, Node *b){
    Node *temp = new Node(0);
    temp -> next = NULL;
    Node *res = temp;
    
    while(a && b) {
        if(a -> data < b -> data){
            temp -> child = a;
            a = a -> child;
        }
        else {
            temp -> child = b;
            b = b -> child;
        }
        temp = temp -> child;
    }
    if(a) temp -> child = a;
    else temp -> child = b;
    
    return res -> child;
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(!head || !head -> next) return head;
    
    head -> next = flattenLinkedList(head -> next);
    
    head = mergeList(head, head -> next);
    
    return head;
}

