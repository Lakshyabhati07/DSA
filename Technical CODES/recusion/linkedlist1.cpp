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
        int value =this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};

//insertion at head in singly linked list
void InsertAtHead(Node* &head,int data){
    //new node created
    Node* temp=new Node(data);
    //linked at the head
    temp->next=head;
    //head pointing new node
    head=temp;
}


//modify
void Modify(Node* &head){
    Node* curr=head;
    Node* forw=curr->next;
    Node* prev=NULL;

    while(forw!=NULL){
        if(curr->data<forw->data){

            prev->next=forw;
            curr->next=NULL;
            delete(curr);
            curr=forw;
            forw=forw->next;

        }
        else{
            prev=curr;
            curr=curr->next;
            forw=forw->next;
        }
    }
    
}
//insertion at tail (end node k aaage newndoe add kreega)

void sortlist(Node* &head){
    
}


void InsertAtTail(Node* &tail,int data){

Node* temp=new Node(data);
tail->next=temp;
tail=tail->next;

}

void InsertAtpostion(Node* &head,Node* &tail,int data,int pos){

Node* newnode=new Node(data);
Node* temp=head;

while(--pos){
    temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;

}

//ab deletionnn

void deleteNode(int pos,Node* &head){
Node* temp=head;
Node* curr=head;
if(pos==0){
    //deleting first node
    head=head->next;
    //memory free
    delete temp;
}

while(--pos){
    curr=temp;
    temp=temp->next;
}

curr->next=temp->next;
temp->next->next=NULL;

}









//printing the linked list

void printlist(Node* &head){

Node* temp=head;
while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//circular liost or not;
bool isCircular(Node* head){

    
    if(head==NULL)
    return true;

    Node* temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;
    }
    if(temp==NULL)
    return false;

    return true;


}
//loop in any linked list approach 1
bool detectLoop(Node* head)
{
    if(head==NULL)
    return false;

    map<Node* , bool> visited;
    Node* temp=head;

    while(temp!=NULL){
        if(visited[temp]== true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;

}

//aproach 2
 bool detectloop2(Node* head){

    if(head==NULL)
    return false;

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
        fast=fast->next;
        slow=slow->next;
        if(slow==fast)
        return true; 
    }
return false;
 }





int main(){

    Node* tail=NULL;
    Node* head=NULL;
    Node* node1=new Node(3);
    head=node1;
    tail=node1;


   // cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    InsertAtHead(head,2);
    InsertAtHead(head,6);
    InsertAtHead(head,5);
InsertAtHead(head,11);
   printlist(head); //24,20,19,10
    Modify(head);
    printlist(head);
   /* cout<<endl;
    InsertAtTail(tail,19);
    InsertAtTail(tail,20);
    InsertAtTail(tail,24);
    InsertAtpostion(head,tail,10,3);
    printlist(head); //10,19,20,24

  //  deleteNode(3,head);
    cout<<endl;
    printlist(head);
if(isCircular(head)){
    cout<<"LIST is circular";
}
else cout<<"NOT CIRCULAR";*/

    return 0;
}