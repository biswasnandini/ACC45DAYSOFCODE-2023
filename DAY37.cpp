//Chef and his apps
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int ans = s-(x+y);
	    if(ans>=z)
	    {
	        cout<<0<<endl;
	    }
	    else if((ans+x) >= z || (ans+y)>=z)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
