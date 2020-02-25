#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,s;
        cin>>a>>b>>n>>s;
 
        if(s%n<=b && a*n+b>=s)
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
