#include<bits/stdc++.h>
using namespace std;

//we will use map to store.. prefix sum as map_key till index as map_value;


int maxzerosum(vector<int> &arr)
{
int maxlen=0;
int sum=0;
unordered_map<int,int> m;
for(int i=0;i<arr.size();i++){
sum+=arr[i];
if(sum==0){
    maxlen++;
}



if(m.find(sum)!=m.end()){
    maxlen=max(maxlen,i-m[sum]);

}
else{
    m[sum]=i;
}


}




}




int main(){


int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];  
}

cout<<maxzerosum(arr)<<endl;

    return 0;
}