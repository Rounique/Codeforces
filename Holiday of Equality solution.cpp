#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;
int a[100000];
int b[100000];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	sort (a, a+n);
	int max = a[n-1];
	int sum = 0;
	for (int i = 0; i < n-1; ++i)
	{
		sum += max - a[i];
	}
	cout << sum;
	return 0;
}
