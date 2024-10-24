#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cnt(const vector<int>&v,int k) {
    int ans=0;
    int sum=0;
    int l=0;
    for (int r=0; r<v.size();r++) {
        sum +=v[r]; 
        if (r-l+1>k) {
            sum-=v[l]; 
            l++; 
        }
        ans=max(ans,sum);
    }
    return ans; 
}
void solve(){
     test {
        int n,k;
        cin >>n>>k; 
        vector<int>a(n);
        map<int,int>m;

        for (int i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]++;
        }

        vector<pair<int,int>> gp(m.begin(),m.end());
        
        int mx=0;
        vector<int>v; 

        for (int i=0;i<gp.size();i++) {
            if (i ==0 || (gp[i].first==gp[i-1].first+1)) {
                v.push_back(gp[i].second);
            } else {
               
                mx = max(mx,cnt(v,k));
                v.clear(); 
                v.push_back(gp[i].second);
            }
        }

        if (!v.empty()) {
            mx =max(mx,cnt(v,k));
        }
       cout<<mx<<endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}