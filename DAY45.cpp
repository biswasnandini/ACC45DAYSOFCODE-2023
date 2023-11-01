//Finding Shoes
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int total,left;
	    cin>>total>>left;
	    if(total <= left)
	    {
	        cout<<total<<endl;
	    }
	    else
	    {
	        cout<<(total-left)+total<<endl;
	    }
	}
	return 0;
}
