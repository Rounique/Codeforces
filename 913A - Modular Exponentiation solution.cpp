#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n >> m;
    long long int ans=1;
    if( n <= 26 )
    {
        for (int i = 0; i < n; ++i)
        {
            ans *= 2;
        }
        cout << m%ans;        
    }
    else cout << m;
    return 0;
}
      
