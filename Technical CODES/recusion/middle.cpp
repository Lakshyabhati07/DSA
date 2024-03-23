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


Node* kreverse(Node* head,int k){

    if(head==NULL)
    return NULL;

    //step1. reverse first k nodes
    Node* forward=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;

    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    //recursion;
    if(forward!=NULL)
    head->next=kreverse(forward,k);

    return prev;

}

int main(){

}