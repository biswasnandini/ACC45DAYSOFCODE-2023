//chefs and recipe
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    int A[n];
	    for (int i=0;i<n;i++)
	    cin >> A[i];
	    int freq[1001] = {0};
	    for (int i=0;i<n;i++)
	    {
	        freq[A[i]]++;
	    }
	    int unique[1001]={0};
	    int flag = 0;
	    for (int i=0;i<1001;i++)
	    {
	        if (freq[i]>0)
	        {
	           unique[freq[i]]++;
	           if (unique[freq[i]] >1)
	           {
	             flag = 1;
	             break;
	           }
	        }
	    }
	    if (flag == 1)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        int visited[1001] = {0};
	        visited[A[0]] = true;
	        int i;
	        for (i=1;i<n;i++)
	        {
	            if (A[i] == A[i-1])
	            {
	                continue;
	            }
	            if (visited[A[i]] == true)
	            {
	                cout << "NO" << endl;
	                break;
	            }
	            visited[A[i]] = true;
	        }
	        if (i == n)
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
