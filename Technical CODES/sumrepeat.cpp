#include<bits/stdc++.h>
using namespace std;



int main(){

int n;
cin>>n;
int a;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    //v.push_back(a);
}

map<int,int> m;
 
for(int i=0;i<n;i++){
    m[v[i]]++;      // map m frequncy k sath number
}

int sum=0;
for(auto ele:m){
    if(ele.second>1){
        sum+=ele.first;
    }
}

cout<<"ANSWER:"<<sum<<endl;
return 0;
}