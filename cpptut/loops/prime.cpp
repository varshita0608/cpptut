#include <iostream>
using namespace std;

int main() {
	//prime no. or not
	int n;
	cin>>n;
	bool flag = true; //no. is prime
	for (int i=2;i<=n-1;i++){
	    if(n%i==0){
	         flag = false;
	    }
	}
	if (n==1) cout<<n<<" is neither prime nor composite";
	else if (flag == true ) cout<<n<<" is prime";
	else cout<<n<<" is a composite number ";
return 0;
}
