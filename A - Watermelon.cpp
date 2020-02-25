#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0 && i%2==0)count++;
    }
    if(count>1)
    {
            cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
