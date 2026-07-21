#include<iostream>
using namespace std;
int main(){
    int a,b,q,r;
    cin>>a>>b;
    q=a%b;
    r=a-(b*q);
    cout<<r;
    //a=b*q+r
}