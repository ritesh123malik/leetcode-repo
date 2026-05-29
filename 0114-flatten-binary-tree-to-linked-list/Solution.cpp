class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* prev = nullptr;
        
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            
            if (prev) {
                prev->left = nullptr;
                prev->right = node;
            }
            
            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
            
            prev = node;
        }
    }
};