//to find the fractional part of a float value
#include <iostream>
using namespace std;

int main() {
	
//  float x;
//  cin>>x;
//  int y = x;
// if(y<0){
//     y=y-1;
// }
//  float z=x-y;
//  cout<<z;  //THIS IS IMPLICIT TYPECASTING

float x;
cin>>x;
int y=(int)x;
if(y<0){
    y=y-1;
}
float z= (float)y;
x=x-z;
cout<<x;   //THIS IS EXPLICIT TYPECASTING
}
