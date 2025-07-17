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
void inorder(TreeNode* root,vector<int> &a){
    if(root == NULL) return;

    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right, a);
}
    vector<int> findMode(TreeNode* root) {
        vector<int> a,ans;
        inorder(root,a);

        unordered_map<int,int> freq;

        int maxFreq = 0;

        for (int num : a) {
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        //vector<int> ans;
        for (auto& [val, count] : freq) {
            if (count == maxFreq) {
                ans.push_back(val);
            }
        }

        return ans;

    }
};