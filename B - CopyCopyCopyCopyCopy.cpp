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
       set<int>so;
        int number;
        while(n--)
        {
 
            cin>>number;
            so.insert(number);
        }
        cout<<so.size()<<endl;
       }
 
 
    return 0;
}
