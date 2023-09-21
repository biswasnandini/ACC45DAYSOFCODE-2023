#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y>x)
           cout<<x+(y-x)*2<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}
