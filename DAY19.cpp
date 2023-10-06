#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
     for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0)
        return false;
    }
return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m ,n ;  
        cin >> m >>n ;
      if (m==1) m++;
      for (int i = m ; i <=n ; i++){
          if (prime(i))
          cout << i << endl;
      }
        cout <<"\n";
    }
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                   
