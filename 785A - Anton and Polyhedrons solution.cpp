#include<iostream>
using namespace std;
int main()
{
	long long int n; cin>>n;
	long long int faces=0;
	while(n--)
	{
		string s; cin>>s;
		if(s[0]=='I') faces+=20;
		else if(s[0]=='C') faces+=6;
		else if(s[0]=='T') faces+=4;
		else if(s[0]=='D') faces+=12;
		else if(s[0]=='O') faces+=8;
	}
	cout<<faces;
	return 0;
}
