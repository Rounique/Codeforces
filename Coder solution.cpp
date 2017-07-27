#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	if ( n*n % 2 == 0)
		cout <<  n*n /2 << "\n";
	else cout << ( n*n )/2 + 1 << "\n" ;

	for (int i = 1; i <= n; ++i)
	{	
		if ( i % 2 != 0)
			for (int j = 1; j <= n; ++j)
			{
				if( j % 2 != 0 )
					cout << "C";
				else cout << ".";
			}
		else
		{
			for (int j = 1; j <= n; ++j)
			{
				if( j % 2 != 0 )
					cout << ".";
				else cout << "C";
			}			
		}
		cout << "\n";
	}
 	return 0;
}
