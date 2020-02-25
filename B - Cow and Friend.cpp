#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int arr[a],m=0,i,so=0;
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
            m=max(m,arr[i]);
            if(arr[i]==b)
            {
                so=1;
            }
 
        }
 
        if(so)
        {
          cout<<1<<endl;
 
        }
 
        else
        {
        int lol=(b+m-1)/m;
         int ma=max(2,lol);
        cout<<ma<<endl;
        }
 
 
    }
    return 0;
}
