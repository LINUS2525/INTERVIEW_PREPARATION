class BSTIterator {
private:
    stack<TreeNode*>st;
    void pushAll(TreeNode* cur){
        for(;cur!=NULL;cur=cur->left)st.push(cur);
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);

    }
    
    int next() {
        TreeNode* temp=st.top();
        st.pop();
        pushAll(temp->right);
        return (temp->val);
    }
    
    bool hasNext() {
        return !st.empty();
    }
};