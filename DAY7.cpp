#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,Pa,Pb,Pc;
    cin>>t;
    while(t--){
        cin>>Pa>>Pb>>Pc;
        if(Pa+Pc>Pb){
            cout<<Pa+Pc<<endl;
        }
        else 
        cout<<Pb<<endl;
    }
	return 0;
}
