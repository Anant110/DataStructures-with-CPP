#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;

    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

void printvalues(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node*converttoDLL(vector<int>& arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    int n=arr.size();

    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* deletefirstnode(Node* head){
    Node*temp=head;
    head=head->next;

    head->back=nullptr;
    temp->next=nullptr;

    delete(temp);
    return head;
}

Node* deletelast(Node* head){
    Node*temp=head;
    Node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    temp->back=NULL;
    prev->next=NULL;
    delete temp;
    return head;
}

Node* deleteinbetween(Node*head,int k){
    if(k==1){
        head=deletefirstnode(head);
        return head;
    }
    else{
    Node*temp=head;
    int cnt=0;
    Node*prev=temp;
    while(temp){
        cnt++;

        if(cnt==k){
            prev->next=temp->next;
            temp->next->back=prev;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
    }
}

Node* insertatfirst(Node*head){
    return new Node(10,head,nullptr);
}

Node *insertatlast(Node *head){
    Node*temp1=head;
    Node *temp=new Node(76);
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->back=temp1;
    return head;
}

Node* insertinBW(Node* head,int k){
    Node*temp1=head;
    Node* temp=new Node(56);
    Node*prev=NULL;
    int cnt=0;
    while(temp1){
        cnt++;

        if(cnt==k){
            prev->next=temp;
            temp->back=prev;
            temp->next=temp1;
            temp1->back=temp;
            break;

        }

        prev=temp1;
        temp1=temp1->next;
    }
    return head;
}



int main(){
    vector<int> arr={12,14,15,57,89,98};
    Node*head=converttoDLL(arr);

    // head=deletefirstnode(head);
    // head=deletelast(head);
    // head=deleteinbetween(head,6);

    // head=insertatfirst(head);
    // head=insertatlast(head);
    head=insertinBW(head,4);
    printvalues(head);

    return 0;
}