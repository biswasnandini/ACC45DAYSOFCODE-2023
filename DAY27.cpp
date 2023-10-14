//weights
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	cout<<endl;
	for(int i=0;i<T;i++)
	{
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    if(W==X || W==Y || W==Z)
	    {
	        cout<<"\nYES";
	    }
	    else if( (X+Y)==W || (X+Z)==W || (Y+Z)==W )
	    {
	        cout<<"\nYES";
	    }
	    else if(W == (X+Y+Z))
	    {
	        cout<<"\nYES";
	    }
	    else
	    {
	        cout<<"\nNO";
	    }
	}
	return 0;
}
