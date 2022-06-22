#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    Node* d1 = head1;
    Node* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    if(d1) return d1 -> data;
    return -1;
}
