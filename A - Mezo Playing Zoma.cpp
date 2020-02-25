#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
 
    char ch;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='R' || ch=='L')
        {
             count++;
        }
}
 
 
cout<<count+1<<endl;
return 0;
}
