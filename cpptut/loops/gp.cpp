#include <iostream>
using namespace std;

int main() {
    int a,n,r;
    cin>>a>>n>>r;
    
    
   for (int i=1;i<=n;i++){
       
           cout<<(a*pow(r,i-1))<<endl;
       
   }
}