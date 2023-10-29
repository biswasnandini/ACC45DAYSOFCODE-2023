It is my serve
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q;
	    cin>>p>>q;
	    if((p+q)%2==0)
	    {
	        if(((p+q)/2)%2 == 0)
	        {
	            cout<<"Alice"<<endl;
	        }
	        else
	        {
	            cout<<"Bob"<<endl;
	        }
	    }
	    else
	    {
	        if((((p+q)/2)+1)%2 == 0)
	        {
	            cout<<"Bob"<<endl;
	        }
	        else
	        {
	            cout<<"Alice"<<endl;
	        }
	    }
	}
	return 0;
}
