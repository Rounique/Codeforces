#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;
int a[100000];
int b[100000];
int main()
{
	int m, s;
	cin >> m >> s;
	if (m == 1)
	{
		if (s <= 9)
			cout << s << " " << s;
		else
			cout << -1 << " " << -1;
	}
	else if (s > 9 * m || s == 0)
	{
		cout << -1 << " " << -1;
		return 0;
	}
	a[0]++;
	int tmp = s;
	int k = m - 1;

	for (int i = 0; i < s - 1; ++i)
	{
		while (a[k] == 9)
			k--;
		a[k]++;
	}
	k = 0;
	for (int i = 0; i < s; ++i)
	{
		while (b[k] == 9)
			k++;
		b[k]++;

	}
	for (int i = 0; i < m; ++i)
		cout << a[i];
	cout << " ";
	for (int i = 0; i < m; ++i)
		cout << b[i];
	cout << endl;
	return 0;
}
