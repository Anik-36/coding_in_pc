#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {3,5,6,7,8,2};
    vector<int>::iterator it = v.begin();
    //it++;
    cout<<*(it)<<" ";

    // end is not actually end. it is right after end.
    vector<int>::iterator i = v.end();
    cout<<*(i)<<" ";

    i--;
    cout<<*(i)<<" ";

    cout<<v[2]<<" "<<v.at(3)<<" ";
    cout<<v.back()<<" "<<endl;

    // for(vector<int>::iterator a = v.begin(); a!=v.end(); a++){
    //     cout<<*(a)<<" ";
    // }
    // for(auto i= v.begin(); i!=v.end(); i++){
    //     cout<<*(i)<<" ";
    // }
    for(auto i : v){
        cout<<i<<" ";
    }
}