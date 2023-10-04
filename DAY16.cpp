//Candy distribution
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>> t;
    
    for(int i = 0; i < t; i++){
        int N, M;
        cin >> N >> M;
        
        if((N%M) == 0 && (N/M)%2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
	return 0;
}
