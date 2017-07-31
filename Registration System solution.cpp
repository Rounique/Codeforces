#include <iostream>
#include <map>
using namespace std;
int main ()
{
  int n; cin>>n;
  map < string, int > m;
  string s;
  for (int i = 0; i < n; ++i)
  {
    cin >> s;
    if( m[s] == 0 ) 
    { 
      cout << "OK" << endl; 
      m[s] ++;
    } 
    else
    {
      cout << s << m[s] << endl;
      m[s] ++;      
    }
  }
  return 0;
}
