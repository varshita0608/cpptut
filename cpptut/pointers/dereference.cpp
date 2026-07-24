#include<iostream>
using namespace std;
int main(){
    int x =44;
    int* p= &x;
    cout<<x;
    *p=6;
    cout<<endl<<*p;
}