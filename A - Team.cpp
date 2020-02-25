#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int count=0,i;
   while(n--)
   {
       int a,b,c;
       cin>>a>>b>>c;
       int answer=a+b+c;
       if(answer>1)
        count++;
 
 
   }
   cout<<count<<endl;
 
 
    return 0;
}
