// #include<iostream>
// using namespace std;
// void swap(int* a, int* b){
//    int temp = *a;
//    *a=*b;
//    *b=temp;
// return;
// }
// int main(){
//     int x,y;
//     cin>>x>>y;
//     int* p1=&x;
//     int* p2=&y;
//     swap(*p1,*p2);
//     cout<<"x="<<x<<endl<<"y="<<y;
// }

#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){  //pass by reference 
    int temp;
    temp = x;
    x = y;
    y = temp;
return;
}
int main(){
    int x,y;
    cout<<"enter 1st number:";
    cin>>x;
    cout<<"enter 2nd number:";
    cin>>y;
    swap(x,y);
    cout<<"x="<<x<<endl<<"y="<<y;
}