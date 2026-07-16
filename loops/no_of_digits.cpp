#include <iostream>
using namespace std;

int main() {
	//number of digits
	int n;
	cin>>n;
    int a=n;  //store the value of n in a because we will change the value of n in while loop
	int count =0;
	while(n>0){   //use while cause we don't know how many digits are there
	    n/=10;
	    count++;
	}
    if(a==0) cout<<1;
	else cout<<count;
return 0;
}
