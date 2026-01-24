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
    // divide into 2 lists
    // merge them and their result
    // recursive calls
    ListNode* mergeTwo(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val<l2->val){
            l1->next = mergeTwo(l1->next,l2);
            return l1;
        }
        else{
            l2->next = mergeTwo(l1,l2->next);
            return l2;
        }
    }
    ListNode* mergeK(vector<ListNode*>& lists,int l, int r){
        if(l>r) return NULL;
        if(l==r) return lists[l];
        int mid = l + (r-l) / 2;
        ListNode* left = mergeK(lists,l,mid);
        ListNode* right = mergeK(lists,mid+1,r);
        return mergeTwo(left,right);
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        return  mergeK(lists,0,lists.size()-1);
    }
};