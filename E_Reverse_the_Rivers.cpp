#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        int n,m,q;
        cin>>n>>m>>q;
        int a[n+1][m+1];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        vector<int>v[n+2];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                a[i][j]|=a[i-1][j];
                v[i].push_back(a[i][j]);
            }
        }
        while (q--)
        {
            int m;
            cin>>m;
            map<int,int>mp_less,mp_great;
            while(m--){
                int in;
                char ch;
                int val;
                cin>>in>>ch>>val;
                if(ch=='<'){
                    if(mp_less.find(in)==mp_less.end()){
                        mp_less[in]=val;
                    }
                    else{
                    mp_less[in]=min(mp_less[in],val);
                }
                }
                else{
                    if(mp_great.find(in)==mp_great.end()){
                        mp_great[in]=val;
                    }
                    else{
                    mp_great[in]=max(mp_great[in],val);
                    }
                }
            }
        
        int l=1;
        int r=n;
        for (auto x : mp_less) {
            int col = x.first;
            int limit = x.second;
            
            int lo = 1, hi = r, pos = 0;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (a[mid][col] >= limit) {
                    hi = mid - 1;
                } else {
                    pos = mid;
                    lo = mid + 1;
                }
            }
            r = min(r, pos);
        }
        for (auto x:mp_great) {
            int col =x.first;
            int limit=x.second;
            int lo = l, hi = n, pos = n + 1;
            while (lo <= hi) {
                int mid = (lo+hi)/2;
                if (a[mid][col]<=limit) {
                    lo = mid+1;
                } else {
                    pos=mid;
                    hi=mid-1;
                }
            }
            l = max(l,pos);
        }
        // for(auto x:mp_great){
        //     int in = x.first;
        //     int limit = x.second;
        //     auto it = upper_bound(v[in].begin(), v[in].end(), limit);
        //     int pos = it - v[in].begin();
        //     l = max(l, pos+1);
        // }
        // for(auto x:mp_great){
        //     while(l<=n && a[l][x.first]<=x.second){
        //         l++;
        //     }
        // }
        if(l<=r){
            cout<<l<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}