#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort ( a, a+n );
	int exc = 0;
	for (int i = 1; i < n; ++i)		
	{
		if ( a[i] < a[i-1] + 1 )
		{
			exc += a[i-1] + 1 - a[i];
			a[i] = a[i-1] + 1;
		}
	}
	cout << exc;

	return 0;
}
