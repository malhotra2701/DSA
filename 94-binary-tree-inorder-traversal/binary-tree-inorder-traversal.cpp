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
    void inorder(TreeNode* Node){
        if(Node==NULL){
            return;
        }
        inorder(Node -> left);
        res.push_back(Node -> val);
        inorder(Node -> right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return res;
    }
};
//TC O(N)
//SC O(N)