#include <iostream>
using namespace std;
int n,x,y;
int main() {
	// your code goes here
	cin>>n;
    while (n--)
    {
        cin>>x>>y;
        if (x<=y) 
            cout<<0<<endl;
        else 
            cout<<x-y<<endl;
    }
	return 0;
}
