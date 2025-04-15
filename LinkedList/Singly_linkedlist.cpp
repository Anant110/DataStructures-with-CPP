// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1,Node*next1){
//         data=data1;
//         next=next1;

//     }
//     Node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };

// //convert array to linkedlist
// Node*Convertarrtolink(vector<int>&arr){
//     Node*head=new Node(arr[0]);
//     Node*move=head;
//     for(int i=1;i<arr.size();i++){
//         Node*temp=new Node(arr[i]);
//         move->next=temp;
//         move=temp;
//     }
//     return head;
// }

// //find out the length of array
// int LengthofLL(Node*head){
//     Node*temp=head;
//     int cnt=0;
//     while(temp){
//         // cout<<temp->data<<" ";
//         temp=temp->next;
//         cnt++;
//     }
//     return cnt;
// }

// //Search element is present or not
// int elementpresent(Node* head,int element){
//     Node*temp=head;
//     while(temp){
//         if(temp->data==element){
//             return 1;
//         }
//         temp=temp->next;
//     }
//     return 0;
// }

// //Traverse all the values of linkedlist
// void printvalues(Node *head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// //Delete the first element of linked list
// Node*removeHead(Node*head){
//     if(head==NULL) return head;
//     Node*temp=head;
//     head=head->next;
//     delete(temp);
//     return head;
// }


// //Delete the last element of linkedlist
// Node* removetail(Node*head){
//     if(head==NULL && head->next==NULL) return NULL;
//     Node*temp=head;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     delete(temp->next);
//     temp->next=NULL;
//     return head;
// }


// //Delete the kth element of linkedlist
// Node*removekelement(Node*head,int k){
//     if(head==NULL || head->next==NULL) return NULL;
//     Node*temp=head;
//     int cnt=0;
//     Node*prev=NULL;
//     while(temp!=NULL){
//         cnt++;
//         if(cnt==k){
//             prev->next=prev->next->next;
//             delete(temp);
//             break;
//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }


// Node* inserthead(Node*head,int val){
//     Node*temp=new Node(val,head);
//     return temp;
// }


// Node*insertatlast(Node*head,int val){
//     Node*temp=new Node(val);
//     Node*tem=head;
//     while(tem->next!=NULL){
//         tem=tem->next;
//     }
//     tem->next=temp;
//     temp->next=NULL;
//     return head;
// }


// Node *insertinbetweennodes(Node*head,int val,int k){
//     Node*temp=head;
//     Node*newNode=new Node(val);
//     int cnt=0;
//     Node* prev=NULL;
//     while(temp!=NULL){
//         cnt++;
//         if(cnt==k){
//             prev->next=newNode;
//             newNode->next=temp;
//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }



// int main(){
//     vector<int> arr={12,23,45,67,89};
//     // Node* y=new Node(arr[0],nullptr);
//     // cout<<y->data;


//     Node*head=Convertarrtolink(arr);
//     // head=removeHead(head);

//     // cout<<head->data<<endl;
//     // head=removetail(head);

//     // head=removekelement(head,1);

//     // head=inserthead(head,19);
//     // head=insertatlast(head,19);
//     // head=insertinbetweennodes(head,85,3);

//     printvalues(head);

//     // cout<<head->data;
//     // Node*temp=head;
//     // while(temp){
//     //     cout<<temp->data<<" ";
//     //     temp=temp->next;
//     // }

//     // int element;
//     // cin>>element;
//     // cout<<elementpresent(head,element);
//     // cout<<LengthofLL(head);
// }