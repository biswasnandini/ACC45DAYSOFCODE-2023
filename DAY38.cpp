//AMBIDEXTROUS
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int L,R,M,C=0;
	    cin>>L>>R>>M;
	    C += M/R;
	    C += M/L;
	    if(M%L > 0) C++;
	    cout<<C<<endl;
	}
	return 0;
}
