class Solution {
public:
    vector<int> morrisTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode *cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                ans.push_back(cur->val);
                cur=cur->right;
            }
            else{
                TreeNode *rit=cur->left;
                while(rit->right!=NULL && rit->right!=cur){
                    rit=rit->right;
                }
                if(rit->right==cur){
                    rit->right=NULL;
                    ans.push_back(cur->val);
                    cur=cur->right;
                }
                else{
                    rit->right=cur;
                    cur=cur->left;
                }
                 
            }
        }
        return ans;
    }
};