#include<bits/stdc++.h>
using namespace std;
class Codeforces{
    public:
    int dislike(int pos){
        vector<int> v;
        v.push_back(0);
        for(int i=1; i<pos*2; i++){
            if(i%3!=0 && i%10!=3){
                v.push_back(i);
            }
        }
        return v[pos];
    }
};
int main(){
    Codeforces soln;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<soln.dislike(n)<<endl;
    }
}