#include<bits/stdc++.h>
using namespace std;

class arrayQueue{

public:
    int arr;
    int size;
   int Front;
    int Rear;

arrayQueue(){
    size=10000;
    arr=new int[size];
    Front=0;
    Rear=0;
}



void enqueue(int data){

    if(Rear==size){
        cout<<"QUEUE IS FULL"<<endl;
    }
    else{
        arr[Rear]=data;
        Rear++;
    }

int dequeue(){
    if(Front==Rear){
        cout<<"IS EMPTY"<<endl;
    }

   return Rear; 
}

}



};









int main(){
    queue<int> q;
    q.push(1);
    q.push(10);
    q.push(15);
    q.push(14);
    q.push(12);
    q.push(13);
    cout<<q.size()<<endl;
   int n= q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<endl;
        q.pop();
    }

q.push(1);
    q.push(10);
    q.push(15);
    q.push(14);
    q.push(12);
    q.push(13);
    cout<<q.size()<<endl;
    int m=q.size();
    cout<<endl<<endl;
    cout<<"reverse"<<endl;
    for(int i=m;i>0;i--){
        cout<<q.back()<<endl;
    }
}