#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter row number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n+1-i;j++){ //number of stars in each row = n+1-i
	        cout<<"*";
	    }
	    cout<<endl;
	}
return 0;
}
