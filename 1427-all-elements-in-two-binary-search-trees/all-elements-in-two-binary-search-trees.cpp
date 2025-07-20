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
void preorder(TreeNode* root, vector<int>& ans){
    if(root == NULL) return;

    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        preorder(root1,ans1);
        preorder(root2,ans2);

        vector<int> ans3 = ans1;
        ans3.insert(ans3.end(), ans2.begin(), ans2.end());
        sort(ans3.begin(),ans3.end());
        return ans3;
    }
};