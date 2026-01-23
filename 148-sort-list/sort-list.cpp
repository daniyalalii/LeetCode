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
    ListNode* merge(ListNode* a, ListNode* b){
        if(!a) return b;
        if(!b) return a;
        if(a->val<b->val){
            a->next = merge(a->next,b);
            return a;
        }
        else{
            b->next = merge(a,b->next);
            return b;
        }
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(second);
        return merge(left,right);
    }
};