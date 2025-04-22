#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int value){
        val=value;
        left=NULL;
        right=NULL;
    }
};

int main(){
    queue<Node*> qu;
    int x,first,second;
    cout<<"Enter the root node: ";
    cin>>x;
    Node* root=new Node(x);
    qu.push(root);
    while(!qu.empty()){
        Node* temp=qu.front();
        qu.pop();
        cout<<"Enter the left child of "<<temp->val<<":";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            qu.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->val<<":";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            qu.push(temp->right);
        }
    }
}