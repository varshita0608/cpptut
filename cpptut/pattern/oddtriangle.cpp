#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter row number"<<endl;
	cin>>n;
	int a=1; // Initialize a with the first odd number instead of formula 2n-1
	for(int i=1;i<=n;i+=2){ //2n-1 because number of rows in odd triangle = 2n-1
	    for(int j=1;j<=i;j+=2){
	      cout<<a;
		  a+=2;
	    }
	    cout<<endl;
	}
return 0;
}
