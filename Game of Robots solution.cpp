#include <iostream>
using namespace std;
int main()
{
	long long int n, k;
	cin >> n >> k;
	long long int a[n];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	long long int sum = 0 ;
	int i = 1;
	while( sum < k )
	{
		sum += i;
		i ++;
	}
	i--;
	if( sum != k)
		cout << a[ i - (sum-k) ] ;
	else cout << a[ i ];
	return 0;
}
