#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long int a[500000];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	sort ( a+1, a+n+1 );
	long long int moves = 0;
	for (int i = 1; i <= n; ++i)
	{
		moves += ( abs( i - a[i] ) );	
	}
	cout << moves;
	return 0;
}
