#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

map<int,int>mp; 
int get_reverse(int n){
	int sum=0;
	while (n)
	{
		sum*=10;
		sum+=n%10;
		n/=10;
	}
	return sum;
}
void sol() 
{ 
	test{
		mp.clear(); 
	    int n;
        cin>>n;
       
        int res = 0; 
        int x; 
        for (int i=1; i<=n; i++) 
        { 
            cin >> x; 
            if (mp[x] == 0) 
            { 
                int y = get_reverse(x); 
                res++; 
                mp[y]++; 
            } 
            else mp[x]--; 
        } 
        cout << res << '\n'; 
	}
} 

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
	sol();
}