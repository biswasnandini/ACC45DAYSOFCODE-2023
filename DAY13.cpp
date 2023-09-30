//odd pairs
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--)
	{
	    long int n,o=0,e=0,res;
	    cin>>n;
	    o=(n+1)/2;
	    e=n/2;
	    res=2*o*e;
	    cout<<res<<"\n";
	}
	return 0;
}
