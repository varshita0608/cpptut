#include<iostream>
using namespace std;
int main(){
    int n; //1-2+3-4+5-6...
    cin>>n;
    int sum=0;
        if(n%2==0) sum=-n/2; //expand the number and see the pattern
        else sum=-n/2+n;

    cout<<sum;
}