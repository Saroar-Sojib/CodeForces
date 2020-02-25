#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
 
    while(t--)
    {
 
        cin>>n;
        if(n%2==1)
        {
            cout<<7;
        }
 
        else
        {
           cout<<1;
        }
        for(i=1;i<n/2;i++)
        {
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}
