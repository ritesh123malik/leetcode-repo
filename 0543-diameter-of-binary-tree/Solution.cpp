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
 int ans=0;
    int height(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        else if(root->left==NULL && root->right==NULL){
            return 1;
        }
        
        
        int right=height(root->right);
        int left=height(root->left);
        ans=max(left+right,ans);
        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};