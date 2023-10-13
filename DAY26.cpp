//check algorithm
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=1,rc=0;
	    for(int i=0; i<s.size()-1; i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            rc++;
	            if(count<10)
	            {
	                rc++;
	            }
	            else
	            {
	                while(count>0)
	                {
	                    rc++;
	                    count/=10;
	                }
	            }
	             count=1;
	        }
	    }
	    if(s[s.size()-1]!=s[s.size()-2])
	    {
	        rc+=2;
	    }
	    else
	    {
	        rc++;
	            if(count<10)
	            {
	                rc++;
	            }
	            else
	            {
	                while(count>0)
	                {
	                    rc++;
	                    count/=10;
	                }
	            }
	    }
	    if(rc<s.size())
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
