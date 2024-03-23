#include<bits/stdc++.h>
using namespace std;

void print(string s,int n){
    if(n==0)
    return;
     print(s,n-1);
    cout<<n<<"->"<<s<<endl;
}

//SUM OF N NUMBERS using 2 variables;
void sumfun(int n,int sum){

    if(n<0)  {
        cout<<sum<<endl;  
        return;
        }
    sumfun(n-1,sum+n);
     
}
//functional recursion
int sumfun2(int n){
    if(n==0) return 0;

    return n+sumfun2(n-1);
}

//factorial of a number
int factorial(int n){
    if(n==0)    return 1;
    //cout<< n <<endl;
    return n*factorial(n-1);
    
}


//reverse an array
void reverse1(vector<int> &arr,int n,int i){
    if(i>n/2) return;

    swap(arr[i],arr[n-i-1]);

    reverse1(arr,n,i+1);
}
//correction needed

int* reverse2(int *arr,int l,int r){
    if(l>r) return arr;
    swap(arr[l],arr[r]);
    cout<<"->"<<arr[l]<< " with"<< arr[r]<<endl;
    reverse2(arr,l--,r++); 

    return arr;   
}

//fibonaci number
int fib(int n){
    if(n==0||n==1)
    {   return n;
        }

    return fib(n-1)+fib(n-2);
}

//palindrome string
bool checkpalindrome(string s, int idx,int n){
    if(idx>n/2) return true;

    if(s[idx]!=s[n-idx-1])  return false;

    return checkpalindrome(s,idx+1,n);

}

//PRINT SUBSEQUENCES

void printSubSequ(int arr[], vector<int> &ds, int i, int n){

    if(i>=n) 
    {   for(auto it:ds){
        cout<< it<<" ";
    }
    if(ds.size()==0) cout<<"{ }";
     cout<<endl;
        return;
    }

    //include
    ds.push_back(arr[i]);
    printSubSequ(arr,ds,i+1,n);
    
    //exclude
    ds.pop_back();
    printSubSequ(arr,ds,i+1,n);

}

void printSubSequenceSumK(int arr[],vector<int> &ds, int i, int n, int k, int sum){

    if(i>=n){
       if(sum==k) {
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;}
        return;
    }

    //include
    ds.push_back(arr[i]);
    sum+=arr[i];
    printSubSequenceSumK(arr,ds,i+1,n,k,sum);
    //exclude
    sum-=arr[i];
    ds.pop_back();
    printSubSequenceSumK(arr,ds,i+1,n,k,sum);

}

bool printSubSequenceSum(int arr[],vector<int> &ds, int i, int n, int k, int sum){

    if(i>=n){
       if(sum==k) {
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return true;
        }
       else return false;
    }

    //include
    ds.push_back(arr[i]);
    sum+=arr[i];
   if(printSubSequenceSum(arr,ds,i+1,n,k,sum))  return true;
    //exclude
    sum-=arr[i];
    ds.pop_back();
    if(printSubSequenceSum(arr,ds,i+1,n,k,sum)) return true;


return false;
}

int main(){

string s;
cin>>s;

int n;
cin>>n;

//vector<int> arr(n);
//int a[n];
//print(s,n);

//sumfun(n,0);

//cout<<sumfun2(n);

//cout<<factorial(n);

//input array
/*cout<<"Array Input dedo: "<<endl;
for(int i=0;i<n;i++) {
    cin>>arr[i];
}

//reverse1(arr,n,0);

//reverse2(a,0,n);

cout<<"array output lelo ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

int cnt=0;
for(int i=0;i<n;i++)
{  
    cout<<fib(i)<<" ";
}
*/

bool bta=checkpalindrome(s,0,s.size());
cout<<s.size()<<endl;
cout<<bta<<endl;

int arr[n];
vector<int> ds;


cout<<"Array Input dedo: "<<endl;
for(int i=0;i<n;i++) {
    cin>>arr[i];
}
cout<<"Ab subsequnece: "<<endl;
//printSubSequ(arr,ds,0,n);
cout<<"ab sum k"<<endl;

printSubSequenceSum(arr,ds,0,n,2,0);

return 0;
}