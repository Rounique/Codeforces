#include <iostream>
#include <map>
using namespace std;
// " Don't you think if I were wrong I'D KNOW IT ?! " Sheldon Cooper...
int main ()
{
	int n;
	string names [10] = { "Sheldon" ,"Leonard" ,"Penny" ,"Rajesh" ,"Howard" } ; 
	cin	>>	n;
	while ( n > 5 )
		n = n/2 - 2;
	cout << names [ n-1 ];
	return 0;
}
