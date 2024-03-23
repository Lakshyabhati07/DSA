#include<bits/stdc++.h>
using namespace std;



class graph
{

public:

unordered_map<int,list<int>> adj;

void addEdge(int u, int v,bool direction){
    //bool direc->0 undirected
    // bool direc->1 directed

    //create an edge from u to v

    adj[u].push_back(v);
    if(direction==0){
        
            adj[v].push_back(u);
        
    }


}

void printAdjList(){
    for(auto i:adj){
        cout<< i.first<< "->";
        for(auto j:i.second)
            cout<<j<<",";
    cout<<endl;
    }
}


};




int main(){

int n;
cout<<"enter the number of node:"<<endl;

cin>>n;
int m;
cout<<"Enter number of edges:"<<endl;
cin>>m;

graph g;

for(int i =0;i<m;i++){
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
}

g.printAdjList();

return 0;
}