#include <iostream>
#include <algorithm>
using namespace std;
long long int a[100100];
int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort ( a, a+n );
	long long int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i] * x;
		x--;
		if( x < 1 )
			x = 1;
	}
	cout << ans;

	return 0;
}
