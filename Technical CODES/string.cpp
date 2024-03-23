#include<bits/stdc++.h>
using namespace std;

void reverse(string &s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
    
string sortingSentence(string s){

vector<string> ans(10);
string temp="";
int count=0;
int index=0;
while(index<s.size()){

    if(s[index]==' '){
        int pos= temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;
    }

    else{
        temp+=s[index];
    }
    index++;
}
int pos= temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;

for(int i=0;i<=count;i++){
    temp+=ans[i];
    temp+=' ';
}
temp.pop_back();
return temp;
}

int longestPalindrome(string s){
    int freqL[26];
    int freqU[26];
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z')
        freqL[s[i]-'a']++;
        if(s[i]>='A'&&s[i]<='Z')
        freqU[s[i]-'A']++;
    }
    int c=0;
    bool odd=false;
    for(int i=0;i<26;i++){
        int l=freqL[i];
        int r=freqU[i];
        
        if(l==0||r==0)
        continue;
        else{

            if(l%2==0){
                c+=l;
            }
            else{
                c+=(l-1);
                odd=true;
            }

             if(r%2==0){
                c+=r;
            }
            else{
                c+=(r-1);
                odd=true;
            }


        }

    }
    if(odd)
    return c+1;

return c;

}

int main(){
string s;
//
cout<<"With space"<<endl;
getline(cin,s);
cout<<s<<endl;
reverse(s);
cout<<"After reverse"<<endl;
cout<<s<<endl;
cout<<s.size()<<endl;
}