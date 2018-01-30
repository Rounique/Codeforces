#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c=0;
    for (int i = 0; i < s.size()/2; ++i)
    {
        if(s[i]==s[s.size()-1-i])
            c++;
    }
    int sz = s.size();
    if( sz%2==0 )
    {
        if(sz/2-1==c)
            cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        if(sz/2==c || sz/2-1==c)
            cout<<"YES";
        else cout<<"NO";
    }
    cout<<c<<"\n"<<sz/2;
    return 0;
}
      
