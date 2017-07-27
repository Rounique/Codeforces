#include <iostream>
using namespace std;

int main()
{
	int arr[100000] ;
	int k = 1 ;
	for (int i = 1; i < 400; ++i)
	{
		int a = i;
		int b[5];
		for (int i = 0; i < 5; ++i)
		{
			b[i] = -1;
		}
		int f=0;
		while ( a!=0 )
		{
			b [f] = a%10;
			a/=10;
			f++;
		}
		f--;
		while ( b[f]!=-1 && f>=0 )
		{
			arr[k] = b[f];
			f--;
			k++;
		}
	}
	int x; cin >> x;
	cout << arr[x];
	
	return 0;
}
