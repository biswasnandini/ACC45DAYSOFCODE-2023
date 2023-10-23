//Cricket ranking
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,t;
	cin >> t;

	while (t--)
{
	int a,b,c,d,e,f,g=0,h=0;
	cin >> a >> b >> c;
	cin >> d >> e >> f;
	
	/*g=a+b+c;
	h=d+e+f;
	
	if((a != d) && (b != e) && (c != f) ) 
	{
		if((a+b)>(d+e) || (b+c)>(e+f) || (a+c)>(d+f) || g>h)
		{
			cout << "A" << endl;
		}
		if((a+b)<(d+e) || (b+c)<(e+f) || (a+c)<(d+f) || g<h)
		{ 
			cout << "B" << endl;
		}
	}*/
	
	if(a>d)
	{
		g++;
	}
	else
	{
		h++;
	}
	if(b>e)
	{
		g++;
	}
	else
	{
		h++;
	}
	if(c>f)
	{
		g++;
	}
	else
	{
		h++;
	}
	
	if (g>h)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "B" << endl;
	}
}
return 0;
}
