#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    Node *curr = head;
    int len = 1;
     
    while(curr -> next){
        len++;
        curr = curr -> next;
    }
    
    k = k % len;
    k = len - k;
    curr -> next = head;
    
    while(k--) {
        curr = curr -> next;
    }
    
    head = curr -> next;
    curr -> next = NULL;
    
    return head;
}
