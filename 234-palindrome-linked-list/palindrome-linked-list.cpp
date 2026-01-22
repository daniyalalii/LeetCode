/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    private:
    ListNode* reverseList(ListNode* head){
        if(head==NULL) return NULL;
        ListNode* cur = head;
        ListNode* prev = NULL;
        while(cur!=NULL){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = reverseList(slow);
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;
        while(temp!=NULL){
            if(firstHalf->val!=temp->val) return false;
            temp = temp->next;
            firstHalf = firstHalf->next;
        }
        return true;
    }
};