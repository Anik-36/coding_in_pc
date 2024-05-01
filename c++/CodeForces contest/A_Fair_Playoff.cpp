#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int fw,sw,fl,sl;
        if(a>b){
            fw=a;
            fl=b;
        }else{
            fw= b;
            fl= a;
        }
        if(c>d){
            sw= c;
            sl = d;
        }else{
            sw = d;
            sl = c;
        }
        if(fw<sl or sw<fl) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}