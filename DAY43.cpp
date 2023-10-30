//Uncle Johny
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        k=k-1;
        int john=arr[k];
        int m = sizeof(arr)/sizeof(arr[0]); 
        sort(arr, arr+n); 
        for(int i=0;i<n;i++)
        {
            if(arr[i]==john)
            cout<<(i+1)<<endl;
        }
        
    }
    return 0;
}
