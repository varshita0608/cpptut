#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int main() {
    int n,r;
    cin>>n>>r;
    int nfact= fact(n);
    int rfact= fact(r);
    int nrfact= fact(n-r);
    int ncr;
    ncr=nfact/(nrfact*rfact);
    cout<<ncr;


}
