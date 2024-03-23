#include<bits/stdc++.h>
using namespace std;
//main function se exceution start hota h!!
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

print thissss
*/
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j){
            cout<<n-j+1<<"";
            j--;
        }
        j--;
        i++;
        cout<<endl;
    }

}