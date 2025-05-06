class Solution {
    public:
        int solve(TreeNode* root,int& cnt){
            if(root==NULL) return 0;
            if(root) cnt++;
    
            solve(root->left,cnt);
            solve(root->right,cnt);
    
            return cnt;
        }
    public:
        int countNodes(TreeNode* root) {
            int cnt=0;
            return solve(root,cnt);
        }
    };