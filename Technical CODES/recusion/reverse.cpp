#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
      //  int value =this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};
void InsertAtHead(Node* &head,int data){
    //new node created
    Node* temp=new Node(data);
    //linked at the head
    temp->next=head;
    //head pointing new node
    head=temp;
}








//by iterationsss
Node* reverse1(Node* head){

if(head==NULL||head->next==NULL)
return head;
Node* prev=NULL;
Node* curr=head;
Node* forward=NULL;

while(curr!=NULL){
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
}
return prev;
}

//by recursion 2.O

Node* reverse2(Node* head){
    
    if(head==NULL||head->next==NULL)
    return NULL;

    Node* chotahead=reverse2(head->next);
   head->next->next=head;
    head->next=NULL;

    return chotahead;


}
//by recursion
void reverse3(Node* &head,Node* curr,Node* prev){
if(curr==NULL)
{
    head=prev;
    return;
}

Node* forward=curr->next;
reverse3(head,forward,curr);
curr->next=prev;

}


void printlist(Node* &head){

Node* temp=head;
while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){


    Node* node1=new Node(10);
    Node* head=node1;
    Node* prev=NULL;
Node* curr=head;
   InsertAtHead(head,12);
   InsertAtHead(head,14);
   InsertAtHead(head,15);
   InsertAtHead(head,17); 
    printlist(head);

    cout<<"REVERSED"<<endl;
    reverse3(head,curr,prev);
    printlist(head);
    return 0;
}