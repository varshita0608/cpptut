#include <iostream>
using namespace std;

int main() {
   int x,y,z;
   cin>>x>>y>>z;
   if(x>y && x>z){
       cout<<"biggest number : "<<x;
   }
   else if(y>x && y>z){
        cout<<"biggest number : "<<y;
   }
   else{
        cout<<"biggest number : "<<z;
   }

return 0;
}
