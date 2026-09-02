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
    vector<int> res;
    void postorder(TreeNode* Node){
        if(Node == NULL){
            return;
        }
        postorder(Node -> left);
        postorder(Node -> right);
        res.push_back(Node -> val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return res;
    }
};
//TC O(N)
//SC O(N)