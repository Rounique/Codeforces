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
   int ans; int k = 0;
   for (int i = 1; i <= n; ++i)
   	cin >> a[i];
   for (int i = 1; i <= n; ++i)
   {
   	for (int j = i; j <= n; ++j)
  		{
  			for (k = 1; k <= n; ++k)
 				b[k] = a[k];
   			for (k = i; k <= j; ++k)
   				b[k] = 1 - b[k];
   			int sum = 0;
   			for (k = 1; k <= n; ++k)	
   				sum += b[k];
   			ans = max(ans, sum);
  		}	
   }
 	cout << ans;
	return 0;
}
