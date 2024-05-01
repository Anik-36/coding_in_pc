#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum = 0, count =0;
        cin>>n;
        int a[n];
        for(int i =0 ; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=n){
            count = abs(sum - n);
        }else count++;
        cout<<count<<endl;
    }
}