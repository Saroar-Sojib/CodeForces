#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
		long long int  len=s.length();
		for(int i=0,j=0;i<len;i++){
			if(s[i]>='A'&&s[i]<='Z'){
				s[i]+=32;
			}
			if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='y'||s[i]=='u'){
				s[i]=' ';
			}
		}
		for(int i=0;i<len;i++){
			if(s[i]==' ')continue;
			else cout<<"."<<s[i];
		}
		cout<<endl;
 
 
 
    return 0;
}
