#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {3,5,6,7,8,2};
    v.erase(v.begin()+1); // delete only 5
    cout<<"after deletion ";
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after again deletion "; // {3,6,7,8,2}
    // v.erase(start,end) (right after end).
    v.erase(v.begin()+1,v.begin()+4); //delete a portion(6,8)
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"after insertion ";
    v.insert(v.begin(),300);
    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"after insertion ";
    v.insert(v.begin()+1 , 3 , 59); //insert 59 three times
    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<endl;
    cout<<"after insert a vector into a vector  ";
    vector<int> a(5,9);
    v.insert(v.begin()+2,a.begin(),a.begin()+2);
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"the size of the vector is : "<<v.size()<<endl;
    v.pop_back();
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"after swaping the vectors : ";
    vector<int>v1 = {10,2,29};
    vector<int>v2 = {40,9};
    v1.swap(v2);
    for(auto i: v1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: v2){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<v.empty();
    
    cout<<endl;
    v.clear();
    cout<<v.empty();

}