#include <iostream>
using namespace std;

int main() {
	//binary triangle
	int n;
	cin>>n;
	int a;
	// for(int i=1;i<=n;i++){
	//     if(i%2==0) a=0;
	//     else a=1;
	    
    //     for(int j=1;j<=i;j++){
	//     cout<<a;
    //     //swapping a between 0 and 1 for next column
	//     if(a==1) a=0;
	//     else a=1;
	//     }
    for(int i=1;i<=n;i++){
	    for(int j=1;j<=i;j++){ //observe the pattern of 1 and 0 in binary triangle, it is either i==j or (i-j)==2
	        if(i==j || (i-j)==2) cout<<1;
	        else cout<<0;
	}
	    cout<<endl;
	}
}
