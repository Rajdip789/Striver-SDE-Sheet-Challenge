#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* list1, Node<int>* list2)
{
    // Write your code here.
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;
    
    if(list1 -> data > list2 -> data) std::swap(list1, list2);
    Node<int>* res = list1;

    while(list1 != NULL && list2 != NULL) {
        Node<int>* temp = NULL;

        while(list1 != NULL && list1 -> data <= list2 -> data) {
            temp = list1;
            list1 = list1 -> next;
        }
        temp -> next = list2;
        std::swap(list1, list2);
    }
    return res;
}

