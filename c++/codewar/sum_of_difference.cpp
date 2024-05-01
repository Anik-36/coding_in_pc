#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0 ;
    vector<int> v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 0 ; i<v.size()-1; i++){
        sum = sum + (v[i]-v[i+1]);
    }
    cout<<sum<<endl;
}