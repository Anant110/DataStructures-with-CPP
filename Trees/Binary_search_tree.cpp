#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;

    Node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};

void levelordertraversal(Node *root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

Node *insertdataintoBST(Node *root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d > root->data){
        //Right part mey insert kardo
        root->right=insertdataintoBST(root->right,d);
    }
    else{
        root->left=insertdataintoBST(root->left,d);
    }
    return root;
}

Node*minValue(Node*root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node*maxValue(Node*root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node * deletefromBST(Node*root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child
        //Left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //Right child
        if(root->right!=NULL && root->left==NULL){
            Node*temp=root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->right!=NULL && root->left!=NULL){
            int mini=minValue(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left=deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right=deletefromBST(root->right,val);
        return root;
    }
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){

        root=insertdataintoBST(root,data);
        cin>>data;
    }

}

void inorder(Node *root){//LNR
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


void preorder(Node *root){//NLR
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node *root){//LRN
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main(){
    Node* root=NULL;

    cout<<"Enter the data into BST"<<endl;
    takeinput(root);

    cout<<"Printing the BST Tree"<<endl;
    levelordertraversal(root);

    cout<<"Printing preorder"<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder"<<endl;
    postorder(root);


    cout<<endl<<"Printing Inorder"<<endl;
    inorder(root);

    cout<<"MaxValue in BST is "<<maxValue(root)->data<<" and "<<"MinValue in BST is "<<minValue(root)->data;
    
    //DELETION
    root=deletefromBST(root,90);

    cout<<"Printing the BST Tree"<<endl;
    levelordertraversal(root);

    cout<<"Printing preorder"<<endl;
    preorder(root);

    cout<<endl<<"Printing postorder"<<endl;
    postorder(root);


    cout<<endl<<"Printing Inorder"<<endl;
    inorder(root);

    cout<<"MaxValue in BST is "<<maxValue(root)->data<<" and "<<"MinValue in BST is "<<minValue(root)->data;

    return 0;
}
