#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
            int n;
            cin >> n;
            int a[n + 2], b[n + 2];
        
            for (int i = 1; i <= n; i++)
                cin >> a[i];
        
            for (int i = 1; i <= n; i++)
                cin >> b[i];
            // int f=1;
            if(a[n] != b[n])
            {
                cout<<"NO\n";
                continue;
            }
        
            if(a[n - 1] != b[n - 1] && b[n - 1] != (a[n - 1] ^ a[n]))
            {
                cout<<"NO\n";
                continue;
            }
            int f=1;
            for(int i = n - 2; i >= 1; i--)
            {
                if(a[i] != b[i] && b[i] != (a[i] ^ a[i + 1]) && b[i] != (a[i] ^ b[i + 1]))
                {
                    f=0;
                    break;
                }
            }
            if(f)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}