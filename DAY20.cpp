//Joining date
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
	    cin>>a>>b;
	    int k=a/5;
	    if(a%5!=0)
	    {
	        k++;
	    }
	    int j=b/5;
	    if(b%5!=0)
	    {
	        j++;
	    }
	    cout<<k-j<<endl;
}

int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
	
	return 0;
}
