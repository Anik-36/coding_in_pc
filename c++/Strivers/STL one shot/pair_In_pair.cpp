#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , pair<int, int> >p = {5,{2,7}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
    
    pair<pair<int , int>,int> a;
    cin>>a.first.second>>a.first.first>>a.second;
    cout<<a.first.first<<" "<<a.first.second<<" "<<a.second<<endl;
    
    pair<pair<int , int>,pair<int ,int>> a;
    cin>>a.first.first>>a.first.second>>a.second.first>>a.second.second;
    cout<<a.first.second<<" "<<a.first.first<<" "<<a.second.second<<" "<<a.second.first<<endl;
    
    
    // pair array
    pair<int , int> a[] = {{1,2},{3,4},{5,6},{6,7}};
    cout<<a[0].second<<endl;
    cout<<a[1].first<<endl;

}