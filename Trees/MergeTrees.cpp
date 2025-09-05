#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        val=value;
        left=NULL;
        right=NULL;
    }
};

class Solution {
public:
    void inorder(TreeNode* root,vector<int>& BST){
        if(root==NULL) return;

        inorder(root->left,BST);
        BST.push_back(root->val);
        inorder(root->right,BST);
    }

    TreeNode* buildtreeBST(vector<int>& temp,int start,int end){
        if(start>end) return NULL;

          int mid = start + (end - start) / 2;
        TreeNode* root= new TreeNode(temp[mid]);
        root->left=buildtreeBST(temp,start,mid-1);
        root->right=buildtreeBST(temp,mid+1,end);

        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1;
        vector<int> temp2;
        inorder(root1,temp1);
        inorder(root2,temp2);

        vector<int> result;
        int i=0;
        int n=temp1.size();
        int j=0;
        int m=temp2.size();
        while(i<n && j<m){
            if(temp1[i]<=temp2[j]){
                result.push_back(temp1[i]);
                i++;
            }
            else{
                result.push_back(temp2[j]);
                j++;
            }
        }

        while(i<n){
            result.push_back(temp1[i]);
            i++;
        }

        while(j<m){
            result.push_back(temp2[j]);
            j++;
        }

        for(auto it:result){
            cout<<it<<" ";
        }
        
        return buildtreeBST(result,0,result.size()-1);
    }
};

int main(){
    
}