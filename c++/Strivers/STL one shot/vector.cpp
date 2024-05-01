#include<bits/stdc++.h>
using namespace std;
int main(){

    //basic syntax of declaring a vector
    vector<int> v;
    v.push_back(2);
    cout<<v[0]<<endl;
    
    //emplace_back is more faster than push_back
    v.emplace_back(5);
    cout<<v[1]<<endl;

    // pair in vector
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    cout<<v1[0].second<<" "<<v1[0].first<<endl;

    // emplace_back need not any curli bracket. but push_back needs
    v1.emplace_back(5,8);
    cout<<v1[1].first<<" "<<v1[1].second<<endl;

    vector<int> v2(5,100);
    cout<<v2[4]<<endl;

    vector<int> v3(5);
    cout<<v3[4]<<endl;

    vector<int> v4(v2);
    cout<<v4[4]<<endl;
}