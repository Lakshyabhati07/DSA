#include<bits/stdc++.h>
using namespace std;

class DNode{

public:
    int data;
    DNode* prev;
    DNode* next;

    DNode(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~DNode(){
        int value=this->data;
        if(this->next!=NULL&& this->prev!=NULL){
            delete next;
            delete prev;
            this->next=NULL;
            this->prev=NULL;
        }
    }

};

//insertion at head
void InsertAthead(DNode* &head,int data)
{
    DNode* nenode=new DNode(data);
    nenode->next=head;
    head->prev=nenode;
    head=nenode;
}


//insertion at tail
void insertattail(DNode* &tail, int data){
 
 DNode* newnode=new DNode(data);
 tail->next=newnode;
 newnode->prev=tail;
 tail=newnode;

}

//insert at any pos
void inserttapos(DNode* &head,int pos, int data){

    

}


//print
void printlist(DNode* &head){

    DNode* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}

int getlength(DNode* &head){
    int length=0;
    DNode* temp=head;
    while(temp!=NULL)
    {   length++;
        temp=temp->next;
    }
    return length;
}

int main(){

DNode* node1=new DNode(10);
DNode* tail=node1;
DNode* head=node1;

}