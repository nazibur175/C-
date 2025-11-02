#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long int
struct custom_hash{
    static uint64_t splitmix64(uint64_t x){
        x+=0x9e3779b97f4a7c15;
        x=(x^(x>>30))* 0xbf58476d1ce4e5b9;
        x=(x^(x>>27))* 0x94d049bb133111eb;
        return x^(x>>31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int>v;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        cin >> a[i];
        for (int i = 0; i < n; i++)
        cin >> b[i];
        
        gp_hash_table<int,int,custom_hash>aa;
        // map<int,int>mp,aa;
        // unordered_map<int, int> mp;
        // unordered_map<int, int> aa, bb;
        // mp.reserve(n*2);
        // bb.reserve(n*2);
        // aa.reserve(n*2);
        // mp.max_load_factor(0.7);
        // aa.max_load_factor(0.7);
        // bb.max_load_factor(0.7);
        int mn=1e18;
        for (int i = 0; i < n; i++)
        {
            // mp[a[i]]++;
            // mp[b[i]]++;

            aa[a[i]]++;
            aa[b[i]]--;
            mn=min(mn,a[i]);
            mn=min(mn,b[i]);

            if(aa[a[i]]==0) aa.erase(a[i]);
            if(aa[b[i]]==0) aa.erase(b[i]);
            
        }
        int f = 1;
        for (auto &x : aa)
        {   
            if (x.second % 2 !=0)
            {
                f = 0;
                break;
            }
            
        }
        if (f == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        vector<int> v;
        // v.reserve(n);
        int tem = 0;
        for (auto &x : aa)
        {
            //if(x.second==0) continue;
            int diff = abs(x.second - 0ll);
            for (int i = 1; i <= diff / 2; i++)
            {
                v.push_back(x.first);
                tem++;
            }
        }
        // cout<<v.size()<<endl;
        sort(v.begin(), v.end());
        // for(auto x:v) cout<<x<<" ";
        // cout<<endl;
        int ans = 0;
        int temp=tem;
        int i=0;
        // 2 3 4 
        for(int i=0;i<temp/2;i++){
            ans+= min(2*mn, v[i]);
        }
        cout<<ans<<endl;
    }
}