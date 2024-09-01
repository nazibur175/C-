#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string v;
    for (int i = 0; i < s.size(); i++)
    {
    	v.push_back (s[i]);
    	int len = v.size ();
    	if (len >= 3 && v.substr (len - 3, 3) == "ABC")
    	{
    		v.pop_back ();
    		v.pop_back ();
    		v.pop_back ();
		}
	}
	for (int i = 0; i < v.size (); i++)
	{
		cout << v[i];
	}
    return 0;
}