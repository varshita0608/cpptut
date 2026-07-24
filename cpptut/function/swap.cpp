#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cout<<"enter 1st number:";
    cin>>x;
    cout<<"enter 2nd number:";
    cin>>y;
    // int temp;
    // temp=x;
    // x=y;
    // y=temp;5
    // cout<<x<<" "<<y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
}