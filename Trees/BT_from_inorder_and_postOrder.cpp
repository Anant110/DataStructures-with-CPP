
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data) : val(data), left(nullptr), right(nullptr) {}
};

TreeNode *solve(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &mpp)
{
    if (preStart > preEnd || inStart > inEnd)
        return NULL;
    TreeNode *root = new TreeNode(preorder[preStart]);

    int inroot = mpp[root->val];
    int numsleft = inroot - inStart;

    root->left = solve(preorder, preStart + 1, preStart + numsleft, inorder, inStart, inroot - 1, mpp);
    root->right = solve(preorder, preStart + numsleft + 1, preEnd, inorder, inroot + 1, inEnd, mpp);

    return root;
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    map<int, int> mpp;
    int n = inorder.size();
    for (int i = 0; i < n; i++)
    {
        mpp[inorder[i]] = i;
    }
    TreeNode *root = solve(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mpp);
    return root;
}

int main(){
    vector<int> preorder={3,9,20,15,7};
    vector<int> inorder={9,3,15,20,7};

    TreeNode* head=buildTree(preorder,inorder);
}