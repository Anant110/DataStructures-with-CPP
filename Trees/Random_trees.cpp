#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;


    Node(int res):data(res),left(nullptr),right(nullptr){}
};

class Solution{
    public:
    vector<int> rightsideview(Node *root){
            if(root==NULL) return {};
        queue<pair<Node*,int>> todo;
        map<int,int> nodes;
        todo.push({root,0});
        while(!todo.empty()){
            auto p=todo.front();
            todo.pop();
            Node*temp=p.first;
            int x=p.second;
            if(nodes.find(x)==nodes.end()){
                nodes[x]=temp->data;
            }
            if(temp->right){
                todo.push({temp->right,x+1});
            }
            if(temp->left){
                todo.push({temp->left,x+1});
            }
        }
        vector<int> ans;
        for(auto it:nodes){
            ans.push_back(it.second);
        }
        return ans;
    }
};

void printresult(vector<int> &res){
    for(auto it:res){
        cout<<it<<" ";
    }
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(10);
    root->left->left->right=new Node(5);
    root->left->left->right->right=new Node(6);
    root->right=new Node(3);
    root->right->left=new Node(9);
    root->right->right=new Node(10);

    Solution solution;
    vector<int> ans=solution.rightsideview(root);

    cout<<"The ans is:";
    printresult(ans);


}