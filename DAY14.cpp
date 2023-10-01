//X jumps
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  int x , y , z;
  int temp;
  cin>>x>>y;
  temp=x;
  z=x/y;
  z+=temp%y;
  cout<<z<<endl;
	
}
	return 0;
}
