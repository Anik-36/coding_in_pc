#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x, ans = 0, f = 0;
        cin>>n>>x; 
        int a[n];
        for(int i=0 ; i<n; i++){
            cin>>a[i];
        }
        f = abs(0-a[0]);
        ans = 2*(abs(a[n-1] - x));
        if(ans<f){
            ans = f;
        }
        int b[n];
        for(int i=0 ; i<n-1; i++){
            b[i] = abs(a[i] - a[i+1]);
            if(b[i]>ans){
                ans = b[i];
            }
        }
        cout<<ans<<endl;
    }
}
