#include<bits/stdc++.h>
using namespace std;


bool stringEqual(map<char,int> m, int n){
for(auto ele:m)
if(ele.second%n!=0){
    return false;
}
return true;
}

int main(){

int n;
cout<<"No of strings in the array:";
cin>>n;

vector<string> v(n);
//taking input from user
for(int i=0;i<n;i++){
    cin>>v[i];
}

map<char,int> m;
for(int i=0;i<n;i++){
   string s= v[i];
   for(int j=0;j<s.length();j++){
    m[s[j]]++;
   }
}



if(stringEqual(m,n))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


}