#include<bits/stdc++.h>
using namespace std;

int main(){

set<int> set1;

set1.insert(3);
set1.insert(4);
set1.insert(1);
set1.insert(30);
set1.insert(14);
set1.insert(10);

cout<<set1.size()<<endl;

//traversal of set approchh 1
set<int>::iterator itr;
for(itr=set1.begin();itr!=set1.end();itr++){
    cout<<*itr<<" ";
}

set1.erase(5);
set1.erase(4);

cout<<"APPROACH 2";
//traversal of set approchh 2
for(auto val:set1){
    cout<<val<<endl;
}



}