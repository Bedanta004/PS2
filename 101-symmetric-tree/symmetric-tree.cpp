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
public:
bool isMirror(TreeNode* p, TreeNode* q){
    if(!p && !q) return true;
    if(p && q){
        return (p->val == q->val)
        //j p ke left me hai, wo q ke right me hai
        && isMirror(p->left, q->right)
        //jo p ke right me hai q ke left me hai
        && isMirror(p->right, q->left);
    }
    return false;
}
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};