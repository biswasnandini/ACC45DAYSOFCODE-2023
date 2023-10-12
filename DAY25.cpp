//chef and coins game
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if (N%6 == 0)
            cout<<"Misha\n";
        else
            cout<<"Chef\n"<<endl;
    }
	return 0;
}
