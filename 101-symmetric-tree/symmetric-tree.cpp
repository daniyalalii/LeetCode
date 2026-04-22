/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
        bool check(TreeNode* child1, TreeNode* child2 ){
            if(child1==NULL && child2==NULL) return true;
            if(child1==NULL || child2==NULL) return false;
            return child1->val==child2->val && check(child1->left,child2->right) && check(child1->right,child2->left);
        }
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};