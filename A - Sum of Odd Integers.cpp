#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
 
        if(k*k<=n && n%2==k%2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       }
 
 
    return 0;
}
