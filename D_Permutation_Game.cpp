#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,pos_a,pos_b;
        cin>>n>>k>>pos_a>>pos_b;
        int p[n+1]={0};
        int a[n+1]={0};
        for(int i=1;i<=n;i++) cin>>p[i];
        for(int i=1;i<=n;i++) cin>>a[i];
        int total_a=0,total_b=0;
        int cur_suma=0;
        int cur_sumb=0;
        
        for(int i=0;i<n and k;i++,k--){
            total_a=max(total_a,(cur_suma+ k*a[pos_a]));
            total_b=max(total_b,(cur_sumb+ k*a[pos_b]));
            cur_suma+=a[pos_a];
            cur_sumb+=a[pos_b];
            pos_a=p[pos_a];
            pos_b=p[pos_b];
        }
        if(total_a==total_b) cout<<"Draw"<<endl;
        else if(total_a>total_b) cout<<"Bodya"<<endl;
        else cout<<"Sasha"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}