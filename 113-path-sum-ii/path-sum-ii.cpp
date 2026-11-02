
class Solution {
public:

    void solve(TreeNode* root, int targetSum,
               vector<int>& path,
               vector<vector<int>>& ans) {

        if (root == NULL) {
            return;
        }

        // Add current node to path
        path.push_back(root->val);

        // Check if leaf node is reached
        if (root->left == NULL && root->right == NULL) {

            if (targetSum == root->val) {
                ans.push_back(path);
            }

        }
        else {
            solve(root->left, targetSum - root->val, path, ans);
            solve(root->right, targetSum - root->val, path, ans);
        }

        // Backtracking
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> path;

        solve(root, targetSum, path, ans);

        return ans;
    }
};
