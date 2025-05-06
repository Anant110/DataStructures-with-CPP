#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node(int data):val(data),left(nullptr),right(nullptr),next(nullptr){}
};

Node* connect(Node* root) {
    if(root==NULL) return NULL;
    queue<Node*> qu;
    qu.push(root);

    while(!qu.empty()){
        int size=qu.size();
        Node* right=NULL;
        for(int i=size-1;i>=0;i--){
            Node* node=qu.front();
            qu.pop();
            node->next=right;
            right=node;
            if(node->right){
                qu.push(node->right);
                qu.push(node->left);
            }
        }
    }

    return root;
}

void printValues(Node* root){
    Node* start=root;
    while(start!=NULL){
        Node* curr=start;

        while(curr!=NULL){
            cout<<curr->val<<" ";
            curr=curr->next;
        }
        cout<<"#"<<" ";

        if(start->left){
            start=start->left;
        }
        else if(start->right){
            start=start->right;
        }
        else{
            start=nullptr;
        }
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    Node* head=connect(root);

    printValues(head);

}