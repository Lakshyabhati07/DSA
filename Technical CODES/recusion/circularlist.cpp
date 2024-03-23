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

        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }

};

void insertathead(Node* &tail,int data){

    


}

void insertbyvalue(Node* &tail,int data,int val)
{
    if(tail==NULL){
         Node* newnode=new Node(data);
         tail=newnode;
         newnode->next=newnode;
    }

   
    Node* temp=tail;
    while(temp->data!=val){
        temp=temp->next;
    }
    Node* curr=new Node(data);
    curr->next=temp->next;
    temp->next=curr;

}
void printlist(Node* &tail){

    Node* temp=tail;
    cout<<tail->data<<" ";
    while(tail!=temp)
    {
        cout<<tail->data<<endl;
        tail=tail->next;
    }

}
int main(){

    Node* node1=new Node(10);
   //no need of head pointer Node* head=node1;
    Node* tail=node1;

    insertbyvalue(tail,11,10);
    printlist(tail);

    return 0;
}