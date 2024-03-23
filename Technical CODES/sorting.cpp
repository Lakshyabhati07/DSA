#include<bits/stdc++.h>
using namespace std;

//type 1 sorting BUBBLE SORT---> 1. stable(maintains relative order)    2. In-place no extra memory 
void bubble_sort(int n,int (&arr)[]){

    bool flag=false;

    while(n>1&&flag)

    {   flag=false;
        for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            flag=true;
        }
    }
n--;

if(!flag){
    break;
}
}

}

//type 2 Insertion sort     1. very efficient

void insertion_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        int i=j-1;
        while(arr[j]>temp){
            
        }
    }

}

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original array is:  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bubble_sort(n,arr);

    cout<<"After Bubble Sort array is:  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}