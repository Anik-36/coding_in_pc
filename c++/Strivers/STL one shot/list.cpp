#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {3,2,5,6,7,8};
    l.push_back(8);
    l.push_front(9);
    l.emplace_front(0);
    l.emplace_back(5);
    l.insert(l.begin()+8,900);
    list<int>b = {3,5,6,7,2,4,5};
    //l.swap(b);
    list<int>c(l);

    list<int> a(3,5);
    for(auto i: c){
        cout<<i<<" ";
    }
    // l.pop_front();
    // for(auto i: l){
    //     cout<<i<<" ";
    // }
}