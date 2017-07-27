#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	string s;
	cin >> s;
	int len = s.size();
	int a[150];
	for (int i = 0; i < 150; ++i)
	{
		a[i] = 0;
	}
	for (int i = 0; i < s.size(); ++i)
	{
		a [ s[i] ] ++;
	}
	int distinct = 0;
	bool need = 0;
	for (int i = 0; i < 150; ++i)
	{
		if ( a[i] > 0 )
			distinct ++;
		if ( a[i] > 1 )
			need = 1;
	}
	if( ( distinct ==  26 && need ) || (len > 26) )	
		cout << -1 ;
	else if ( distinct == 26 && !need)
		cout << 0;
	else cout << len - distinct ;

	return 0;
}
