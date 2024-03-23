#include<bits/stdc++.h>
using namespace std;
// count the no of bits;
int countSetBit(int n){
    int count=0;
    while(n>0){
        if(n&1){
            count++;
           
        }
         n=n>>1;
        
    }
    return count;
}

int flipbits(int n){
    int a=0;
    while(n>0){
        //1->0  0->1
        a=n^1;
       n=n>>1;
    }
    cout<<"afterSet";
    return a;

}

// 2's compliment
//int twoCompliment(int n){

   
//return 0;
//}

//playing with bits  a->10 and b->15 so 10 to 15 k beech k sare no ki bits ka sum
int playingBits(int a, int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=countSetBit(i);
    }
return sum;
}

//maximizing xor
//int maxXor()

int main(){
    int n;
    cin>>n;
   // cout<<countSetBit(n)<<endl;

    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    cout<<flipbits(n);
 // cout<<playingBits(a,b);


}