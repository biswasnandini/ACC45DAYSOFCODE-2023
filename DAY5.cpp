#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int a;
	    cin>>a;
	    if(a==1) {
	        cout<<a<<endl;
	    }
	    else {
	        cout<<(a/2)+1<<endl;
	    }
	}
	return 0;
}
