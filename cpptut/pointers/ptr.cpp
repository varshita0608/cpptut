#include<iostream>
using namespace std;
int main(){
    int x =44;
    int* ptr= &x;
    cout<<*ptr;
    ptr+=1;
    cout<<endl<<*ptr;
}