//Janmansh at fruit market
include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int x,a,b,c;
	    cin>>x>>a>>b>>c;
	    int d[3]={a,b,c};
	    sort(d,d+3);
	    cout<<d[0]*(x-1)+d[1]<<endl;
	}
	return 0;
}
