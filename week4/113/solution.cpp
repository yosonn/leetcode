class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum, 0);
        return result;
    }

    void dfs(TreeNode* node, int targetSum, int sum) {
        if (node == nullptr) return;

        path.push_back(node->val);
        sum += node->val;

        // 到葉節點
        if (node->left == nullptr && node->right == nullptr) {
            if (sum == targetSum) {
                result.push_back(path);
            }
        }

        dfs(node->left, targetSum, sum);
        dfs(node->right, targetSum, sum);

        path.pop_back(); // 回溯
    }
};
