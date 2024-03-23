#include<bits/stdc++.h>
using namespace std;

//Given an integer x, return true if x is a  
bool ispalindrome(int x){
    string s=to_string(x);
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s==s1)
    return true;
    
    return false;
} 

int main(){

    int n;
    cin>>n;
    if(ispalindrome(n))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}