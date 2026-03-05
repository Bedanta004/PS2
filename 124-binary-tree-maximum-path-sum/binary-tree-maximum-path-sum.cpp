
class Solution {
public:
int solve(TreeNode* root, int &ans){
    if(!root) return 0;

    int leftSum = max(0, solve(root->left, ans));
    int rightSum = max(0, solve(root->right, ans));

    ans = max(ans, leftSum+rightSum + root->val);
    return max(leftSum, rightSum)+root->val;
}
    int maxPathSum(TreeNode* root) {
        int ans = root->val;
        solve(root, ans);
        return ans;
    }
};