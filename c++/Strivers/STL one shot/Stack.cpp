#include<bits/stdc++.h>
using namespace std;
int main(){
    // stack is nothing but LIFO ( Last in Fast out). 3 operation (top,pop,push).
    stack<int> st;
    st.push(9); // {9}
    st.push(3); // {9,3}
    st.push(2); // {9,3,2}
    st.push(27); // {9,3,2,27}
    st.emplace(100); // {9,3,2,27,100}
    cout<<st.top()<<endl;  //100
    cout<<"the size of stack is : "<<st.size()<<endl;
    st.pop(); // erase the top value = 100
    cout<<st.top()<<endl; // print 27
    cout<<"the size of stack is : "<<st.size()<<endl;
    stack<int> st1;
    st.swap(st1); // now st is empty stack and st1 is full of element .
    cout<<st1.top()<<endl; // print 27
    cout<<st.empty()<<endl; // true
    cout<<st1.empty()<<endl; // false
}