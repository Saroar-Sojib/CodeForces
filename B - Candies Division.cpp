#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int h,m;
       cin>>h>>m;
       int f=h-h%m;
       f+=min(h%m,m/2);
       cout<<f<<endl;
   }
   return 0;
}
