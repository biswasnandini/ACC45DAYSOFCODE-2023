//No time to wait
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x,a,flag;
	
	  cin>>n>>h>>x;
	  flag=0;
	  while(n--)
	  {
	    cin>>a;
	    if(a+x>=h)
	    {
	    flag=1;
	    break;
	    }
	  }
	  if(flag==1)
	  cout<<"YES"<<endl;
	  else if(flag==0)
	  cout<<"NO"<<endl;
	
	return 0;
}
