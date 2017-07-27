#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	sort ( a, a+n );

	int count=1;
	int total = a[0];

	for (int i = 1; i < n; ++i)
	{
		if( total <= a[i] )
		{
			total += a[i];
			count ++ ;
		}
	}
	cout << count;

 	return 0;
}
