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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    LinkedListNode<int> *start = new LinkedListNode<int>(0);
    start -> next = head;
    
    LinkedListNode<int> *slow = start, *fast = start;
    
    if(!head || !K) return head;
    
    for(int i = 0; i < K; i++) fast = fast -> next;
    
    while(fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next;
    }
    
    slow -> next = slow -> next -> next;
    
    return start -> next;
}
