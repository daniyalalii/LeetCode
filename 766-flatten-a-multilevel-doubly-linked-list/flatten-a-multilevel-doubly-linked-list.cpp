/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while(curr){
            if(curr->child){
                Node* nextNode = curr->next;
                Node* childHead = curr->child;
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;
                Node* tail = childHead;
                while(tail->next) tail = tail->next;
                tail->next = nextNode;
                if(nextNode) nextNode->prev = tail;
            }
            curr = curr->next;
        }
        return head;
    }
};