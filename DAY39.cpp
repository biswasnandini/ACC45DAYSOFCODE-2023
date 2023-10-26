//Chess Match
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    int n, a, b;
	    cin>>n>>a>>b;
	    
	    int tt , tiL;
	    tt  = 2*(180 + (n));
	    tiL = a+b;
	    
	    cout<<tt-tiL<<endl;
	}
	return 0;
}
