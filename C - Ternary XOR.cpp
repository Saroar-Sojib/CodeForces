#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int n;
        cin>>n>>a;
        string b,c;
        bool ch=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='2')
            {
                if(ch)
                {
                    b+='2';
                    c+='0';
                }
                else
                {
                    b+='1';
                    c+='1';
                }
 
            }
            else if(a[i]=='1')
            {
                b+='1';
                c+='0';
                if(!ch)
                {
                  ch=1;
                    swap(b,c);
                }
 
            }
            else
            {
                b+='0';
                c+='0';
            }
        }
        cout<<b<<endl;
        cout<<c<<endl;
    }
    return 0;
}
