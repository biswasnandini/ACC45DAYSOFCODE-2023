//Rearranging digits to get a multiple of 5
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d;
	    cin>>d;
	    string n;
	    cin>>n;
	    int flag=0;
	   for(int i=0;i<d;i++)
	   {
	       if(n[i]=='0' || n[i]=='5')
	       {
	           cout<<"Yes"<<endl;
	           flag=1;
	           break;
	       }
	   }
	   if(flag==0)
	   {
	       cout<<"No"<<endl;
	   }
	   
	}
	return 0;
}
