#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=n/2;
        long long res=0,res1=0;
        for(int i=p;i<n;i++)
        {
            res+=pow(2,i);
        }
        for(int i=1;i<p;i++)
        {
            res1+=pow(2,i);
        }
        cout<<(res1+pow(2,n))-res<<endl;
    }
    return 0;
}
