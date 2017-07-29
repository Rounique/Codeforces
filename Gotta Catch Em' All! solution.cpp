#include <iostream>
using namespace std;
int main()
{
	// Bulbasaur
	string s;
	cin >> s;
	int B=0, u=0, l=0, b=0, a=0, r=0, ss=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if( s[i]=='B')
			B ++;
		if( s[i]=='u')
			u ++;
		if( s[i]=='l')
			l ++;	
		if( s[i]=='b')
			b ++;	
		if( s[i]=='a')
			a ++;	
		if( s[i]=='r')
			r ++;
		if( s[i]=='s')
			ss ++;
	}
	int ans = 0;
	u /= 2;
	a /= 2;
	ans = min (B, min(u, min(l, min(b, min(a, min(r, ss))))));
	cout << ans;

}
