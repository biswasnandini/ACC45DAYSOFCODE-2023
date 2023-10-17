// chef and chocolates
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int rem = a-b;
	    int cost = rem*c;
	    cout<<cost<<endl;
	}
	return 0;
}
