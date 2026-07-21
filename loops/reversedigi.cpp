#include <iostream>
using namespace std;

int main() {
	//reverse of digits
	int n;
	cin>>n;
	int lstdigi=0;
	int r=0;
	while(n>0){
	    r=r*10;
	    lstdigi=n%10;
	    r+=lstdigi;
	    n/=10;
	}
	cout<<r;
return 0;
}
