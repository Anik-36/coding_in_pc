#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch(a){
        case 0:
            cout<<"zero";
            break;
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        default :
            cout<<"no matching";
    }
    return 0;
}