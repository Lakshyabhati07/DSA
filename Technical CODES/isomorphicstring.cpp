#include<bits/stdc++.h>
using namespace std;

bool isomorphicString(string s1,string s2){
    unordered_map<char,char> m;
    if(s1.length()!=s2.length())
    return false;

    //one to many from s1->s2
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i])!=m.end()){
            if(m[s1[i]!=s2[i]])
            return false;
        }
        else{
            m[s1[i]]=s2[i];
        }
    }
//clearing map
//one to many from s1->s2
 for(int i=0;i<s2.length();i++){
        if(m.find(s2[i])!=m.end()){
            if(m[s2[i]!=s1[i]])
            return false;
        }
        else{
            m[s2[i]]=s1[i];
        }
    }

    return true;

}

int main(){

string s1,s2;
cin>>s1>>s2;

cout<<isomorphicString(s1,s2);



}