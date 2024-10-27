#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    //cin>>s;
    //fgets(s,100,stdin); takes with endline and cout as a size
    cin.getline(s,100); // takes without endline and dont count as a size
    cout<<s;
    cout<<" "<<strlen(s); // exact size of string

    return 0;
}