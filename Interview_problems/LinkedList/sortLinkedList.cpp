Node* sortList(Node *head){
    // Write your code here.
    Node* dummy=new Node(-1);
    int count0=0;
    int count1=0;
    int count2=0;
    Node* curr=dummy;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==1){
            count1++;
        }
        else if(temp->data==2){
            count2++;
        }

        temp=temp->next;
    }

    while(count0!=0){
        Node* node=new Node(0);
        curr->next=node;
        curr=node;
        count0--;
    }

    while(count1!=0){
        Node* node=new Node(1);
        curr->next=node;
        curr=node;
        count1--;
    }

    while(count2!=0){
        Node* node=new Node(2);
        curr->next=node;
        curr=node;
        count2--;
    }

    return dummy->next;

}

