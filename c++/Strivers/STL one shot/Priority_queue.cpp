#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority queue is store max heap way . the value of top is the maximum value.
   priority_queue<int> a;
   a.push(3); //first element = {3}
   a.push(2); // {3,2}
   a.emplace(6); // last element  {6,3,2}
   cout<<a.top()<<endl; // print 6
   a.pop(); // delete the first element = 6
   cout<<a.top()<<endl; // print 3
   cout<<a.size()<<endl;

   // the min heap or minimum priority queue 
   cout<<"minimum priority queue is below operation : "<<endl;
   priority_queue<int , vector<int>, greater<int>> b;
   b.push(9); // {9}
   b.push(3); // {3,9}
   b.emplace(29); // {3,9,29}
   b.push(385); // {3,9,29,385}
   cout<<b.top()<<endl; // print 3
   b.pop();
   cout<<b.top()<<endl; // print 9
   cout<<b.size()<<endl;
}