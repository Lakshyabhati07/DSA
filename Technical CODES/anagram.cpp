#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool flag=true;
    unordered_map<char,int> m;
    for(auto s:s1){
        m[s]++;
    }

    for(auto s:s2){
        m[s]--;
    }
    
    for(auto itr:m){
        if(itr.second!=0){
            flag=false;
            break;
        }
    }

cout<<(flag?"TRUE":"FALSE");

return 0;

    
}