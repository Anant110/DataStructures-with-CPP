#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data):val(data),left(nullptr),right(nullptr){}
};

int solve(TreeNode* root,int& maxi){
    if(root==NULL) return 0;
    
    int leftsum=solve(root->left,maxi);
    int rightsum=solve(root->right,maxi);

    maxi=max(maxi,leftsum+rightsum+root->val);

    int give= root->val+max(leftsum,rightsum);
    if(give<0) return 0;
    else return give;
}

int maxPathSum(TreeNode* root) {
    int maxi=INT_MIN;
    solve(root,maxi);
    return maxi;
}

int main(){
    TreeNode* root=new TreeNode(-10);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    int value=maxPathSum(root);

    cout<<value;
}