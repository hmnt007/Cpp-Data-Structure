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
    void swap(TreeNode *curr){
        if(curr == nullptr) return;
        swap(curr->right);
        swap(curr->left);
        
        //swapping child pointers
        TreeNode *temp;
        temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
        
    }
};
