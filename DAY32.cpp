//Dice number
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A[3],B[3], Ac = 0, Bc= 0;
	    for(int i = 0; i<3; i++){
	        cin>>A[i];
	    }
	    for(int i = 0; i<3; i++){
	        cin>>B[i];
	    }
	    for(int i = 0; i<2; i++){
	        for(int j = 0; j<2-i; j++){
	            if(A[j] < A[j+1]){
	                swap(A[j], A[j+1]);
	            }
	            if(B[j] < B[j+1]){
	                swap(B[j], B[j+1]);
	            }
	        }
	    }
	    
	    for(int i = 0; i<3; i++){
	        Ac = (Ac*10) + A[i];
	        Bc = (Bc*10) + B[i];
	    }
	    if(Ac > Bc) cout<<"Alice"<<endl;
	    else if(Ac < Bc) cout<<"Bob"<<endl;
	    else cout<<"Tie"<<endl;
	}
	return 0;
}
