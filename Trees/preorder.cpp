

#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int val):data(val),left(nullptr),right(nullptr){}
};

void preorder(Node *root,vector<int>& arr){
    if(root==NULL) return;

    arr.push_back(root->data);
    preorder(root->left,arr);
    preorder(root->right,arr);
}

vector<int> Preorder(Node *root){

    vector<int> arr;

    preorder(root,arr);

    return arr;
}

int main(){
    Node *root=new Node(-2);
    root->left=new Node(6);
    root->left->left=new Node(0);
    root->left->right=new Node(-6);

    vector<int> TreeNode=Preorder(root);

    for(auto val:TreeNode){
        cout<<val<<" ";
    }
}
                            
                        
