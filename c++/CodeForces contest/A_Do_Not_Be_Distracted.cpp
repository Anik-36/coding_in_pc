#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        int count = 0;
        cin>>a;
        for(int i=0 ; i<n-2; i++){
            if(a[i]!=a[i+1]){
                for(int j= i+2 ; j<n; j++){
                    if(a[i]==a[j]){
                        count++;
                    }
                }
            }
        }
        if(count==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}