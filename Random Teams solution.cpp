#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{ 
    int n , m;
    cin >> n >> m;
    int ma = n - (m-1);
    int max = ma * (ma-1) / 2;
    int p = n/m;
    int e = (n%m) * p;
    int min = (p * (p-1)) / 2 * m + e;
    cout << min << " " << max;
    
    return 0;
}
