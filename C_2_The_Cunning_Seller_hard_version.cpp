#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    vector<int>p3{1};
    while(p3.back()<=1000000000LL){
        p3.push_back(p3.back()*3LL);
    }
    test{
        int n,k;
        cin>>n>>k;
        vector<int>cnt(p3.size());
        int i=0;
        for (int val=n;val>0;val/=3) {
            cnt[i++]=val%3;
        }
        int mx_l=max(0ll,i-1);

        int dil=0;
        int cost=0;
        for (int i=0;i<=mx_l;i++) {
            dil +=cnt[i];
            if (cnt[i]==0) 
                continue;
            if (i==0) cost+=cnt[i]*3LL;
            else cost+=cnt[i]*(p3[i]*3LL + i*p3[i-1]);
        }

        if (dil>k) {
            cout<<-1<<'\n';
            continue;
        }
        for (int i=mx_l; i>=1; i--){
            if (cnt[i]==0) 
                continue;
            int pos=(k-dil)/2;
            int x=min(pos,cnt[i]);
            if (x==0) continue;
            cnt[i-1]+=3*x;
            cnt[i]-= x;
            cost -=x*p3[i-1];
            dil += 2*x;
        }
        cout<<cost<<'\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}