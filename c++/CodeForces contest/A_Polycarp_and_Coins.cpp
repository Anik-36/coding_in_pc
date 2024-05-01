#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cur, counto = 0, countt = 0,diff = 20;
        cin>>cur;
        if(cur==1 or cur == 0){
            counto = cur;
            cout<<counto<<" "<<countt<<endl;
        }
        while(cur>1){
            cur = cur-2;
            counto = cur;
            countt++;
            diff = abs(counto-countt);
            if(diff==0 or diff ==1){
                cout<<counto<<" "<<countt<<endl;
                break;
            }
        }
    }
}