#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,n,m,p,q,v;
        cin>>x>>n>>m;
         for(int i=1;i<=n;i++)
         {
            v=(x/2)+10;
            if(v>=x)break;
            x=v;
         }
         for(int i=1;i<=m;i++)
         {
             x=x-10;
         }
         if(x<=0)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
 
 
    }
    return 0;
}
