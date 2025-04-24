#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val):data(val),left(nullptr),right(nullptr){};
};

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode*temp=root;
    int pred=-1;
    int succ=-1;
    while(temp && temp->data!=key){
        if(temp->data>key){

            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
    }

    if(temp){
    //pred
    TreeNode *leftTree=temp->left;
    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
    }
    
    //succ
    TreeNode *rightTree=temp->right;
    while (rightTree != NULL) {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }
    }

    pair<int,int> ans=make_pair(pred,succ);
    return ans;
}

int main(){
    TreeNode *root=new TreeNode(15);
    root->left=new TreeNode(10);
    root->right=new TreeNode(20);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(12);
    root->right->left=new TreeNode(16);
    root->right->right=new TreeNode(25);

    pair<int,int> ans=predecessorSuccessor(root,10);

    cout<<ans.first<<" "<<ans.second;
}