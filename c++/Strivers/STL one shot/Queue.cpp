#include<bits/stdc++.h>
using namespace std;
int main(){
    // queue is nothing but FIFO(First in First out). similat like stack but also it has .front, .back, also.
   queue<int> a;
   a.push(3); //first element = {3}
   a.push(2); // {3,2}
   a.emplace(6); // last element  {3,2,6}
   a.back()+=3; // {3,2,9}
   cout<<a.back()<<endl; // print 9
   cout<<a.front()<<endl; // 3
   a.pop(); // delete the first element 
   cout<<a.front()<<endl; // print 2
   cout<<a.size()<<endl;
}