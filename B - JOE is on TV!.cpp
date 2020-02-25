#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double n,i;
    double ans=0;
    cin>>n;
 
    for( i=1; i<=n; i++)
        ans+=1/i;
 
 
   
   printf("%.12lf\n",ans);
 
 
    return 0;
}
