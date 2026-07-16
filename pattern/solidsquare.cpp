#include <iostream>
using namespace std;

int main() {
	// solid square
	int n;
	cout<<"enter the side of square"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        cout<<"*";
	    }
	    cout<<endl;
	}
return 0;
}
