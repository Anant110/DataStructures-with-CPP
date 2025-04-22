#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node * right;  

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    } 
};

node *buildtrees(node * root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Inserting the data in left node "<< data <<endl;
    root->left=buildtrees(root->left);
    cout<<"Inserting the data in right node" << data<< endl;
    root->right=buildtrees(root->right);
    return root;
}

// void levelordertraversal(node *root){
//     queue <node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         node *temp=q.front();
//         q.pop();

//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }

//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }

//         }
//     }
// }

// void inorder(node *root){//LNR
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }


// void preorder(node *root){//NLR
//     if(root==NULL){
//         return ;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);

// }

// void postorder(node *root){//LRN
//     if(root==NULL){
//         return ;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";

// }

// void buildfromlevelordertraversal(node * &root){
//     queue<node*> q;
//     cout<<"Enter the data"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     q.push(root);

//     while(!q.empty()){
//         node *temp=q.front();
//         q.pop();

//         cout<<"Enter the left node data "<<temp->data<<endl;
//         int leftdata;
//         cin>>leftdata;

//         if(leftdata!=-1){
//             temp->left=new node(leftdata);  
//             q.push(temp->left);
//         }

//         cout<<"Enter the right node data"<<temp->data<<endl;
//         int rightdata;
//         cin>>rightdata;

//         if(rightdata!=-1){
//             temp->right=new node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }

int main(){
    node * root=NULL;
    // buildfromlevelordertraversal(root);
    // levelordertraversal(root);
    root=buildtrees(root);
    // levelordertraversal(root);

    /*
    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
    
    cout<<endl;
    cout<<"Preorder traversal is: "<<endl;
    preorder(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<endl;
    cout<<"Postorder traversal is: "<<endl;
    postorder(root);
    */




    return 0;

}