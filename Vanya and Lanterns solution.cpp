#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
  int n, l;
  cin >> n >> l;
  int a[100000];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i] ;
  } 
  sort ( a , a+n );
  double maxd = -1;
  for (int i = 1 ; i < n; ++i)
  {
    if( maxd < a[i] - a[i-1] )
      maxd = a[i] - a[i-1] ;
  } 
   maxd = max ( maxd / 2 , max ( (double)(a[0] - 0) , (double)(l - a[n-1]) ) ) ;
   printf("%.10f\n", maxd);
   return 0;
}
