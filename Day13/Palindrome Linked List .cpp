#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int> *ptr) {
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *next = NULL;
    while(ptr != NULL) {
        next = ptr -> next;
        ptr -> next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head -> next == NULL) return true;
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    while(fast -> next != NULL && fast -> next -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    slow -> next = reverse(slow -> next);
    slow = slow -> next;

    LinkedListNode<int> *dummy = head;
    while(slow != NULL) {
        if(dummy -> data != slow -> data) return false;
        slow = slow -> next;
        dummy = dummy -> next;
    }
    return true;
}
