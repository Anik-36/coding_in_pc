#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> apple = {5,5,5};
    int sum = 0 ,count = 1; 
    sum = accumulate(apple.begin(),apple.end(),sum);
    vector<int> capacity = {2,4,2,7};
    sort(capacity.begin(),capacity.end(),greater<int>());
    int csum = capacity[0];
    for(int i= 0 ; i<capacity.size(); i++){
        if(sum>csum){
            csum = csum + capacity[i+1];
            count++;
        }
        else{
            cout<<count;
            return count;
        }
    }
}