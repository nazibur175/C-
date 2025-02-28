#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        while (i<n/2 && s[i]==s[n-i-1])     
        {
           i++;
        }
        n-=2*i;
        s=s.substr(i, n);

        int ans=n;
        for (int z=0;z<2;z++){
            int l=0;
            int r=n+1;
            while (r-l>1) {
    
            int m = (l + r) / 2;
            vector<int> cnt(26);
            for (int i=0;i<m;i++)
                cnt[s[i]-'a']++;
            bool ok = true;
            for (int i=0;i<min(n/2,n-m);i++) {
                char c=s[n-i-1];
                if (i<m){
                    ok&=(cnt[c-'a']>0);
                    cnt[c-'a']--;
                }   
                else{
                    ok &=(c==s[i]);
                }
            }
            for (auto x:cnt)
                ok &=(x%2==0);
            if (ok) {
                r=m;
            } 
            else {
                l=m;
            }
        }
      ans=min(ans,r);
      reverse(s.begin(), s.end());
    }
     cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}