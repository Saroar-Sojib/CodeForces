#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
       int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int pos=0;
         while (pos<n)
        {
            int t=n,pp=0;
            for (int i=pos; i<n; i++)
            if (arr[i]<=t)
                {
                     t=arr[i];
                     pp=i;
                }
            int ps=pp;
            while (pp>pos)
            {
                swap(arr[pp-1],arr[pp]);
                pp--;
            }
            if (ps==pos)
                pos++;
            else pos=ps;
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
 
        cout<<endl;
    }
    return 0;
}
