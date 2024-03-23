#include<bits/stdc++.h>
using namespace std;


//if values sorted two pointer approachhhh O(nlogn)

//

vector<int> targetSum(vector<int>& arr, int n, int target){

unordered_map<int,int> m;
vector<int> ans(2,-1);
for(int i=0;i<n;i++){
    if(m.find(target-arr[i])!=m.end()){
        ans[0]=m[target-arr[i]];
        ans[1]=i;
        return ans;

    }
    else{
        m[arr[i]]=i;
    }
}
return ans;
}

int main(){

int n,target;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
  cin>>arr[i];  
}
cin>>target;

vector<int> ans = targetSum(arr,n,target);

cout<<ans[0]<<","<<ans[1];



return 0;

}