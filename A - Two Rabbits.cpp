#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       long long int x,y,a,b,f,g;
       cin>>x>>y>>a>>b;
       f=y-x;
       g=a+b;
        if(f%g!=0)
            cout<<-1<<endl;
       else
        cout<<(y-x)/(a+b)<<endl;
 
 
    }
    return 0;
}
