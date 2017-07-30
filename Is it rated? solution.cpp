#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int b[10000];
// seriously, Is it!?
int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin>> a[i] >> b[i];
	}
	bool rated = 0, unrated = 0, who_knows = 0;
	for (int i = 0; i < n; ++i)
	{
		if ( a[i] != b[i] )
		{
			rated = 1;
			break;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if( a[i] == b[i] ) 
			{
				if( i < j && a[i] < a[j] )
				{
					unrated = 1;
					break ;					
				}
			}
		}
	}
	if ( rated == 0 && unrated == 0)
	{
		who_knows = 1;
		cout << "maybe";
	}
	else
	{
		if (rated) cout << "rated";
		else cout << "unrated";
	}
	return 0;
}
