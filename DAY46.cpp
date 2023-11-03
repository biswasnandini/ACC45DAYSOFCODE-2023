//Sasta shark tank
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int investor1,investor2;
	    cin>>investor1>>investor2;
	    if(investor1*10 == investor2*5)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(investor1*10 > investor2*5)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else
	    {
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
