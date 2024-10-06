#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        set<int>s;
        for(int i=0;i<n;i++){
            int add_kora_lagbe = ((mx-a[i])/(2*k))*2*k;
            if(mx-(a[i]+add_kora_lagbe)>=k) add_kora_lagbe+= 2*k ;
            s.insert((a[i]+add_kora_lagbe));
        }
        int low = *s.begin();
        int high = *s.rbegin();
        if((high-low)>=k) cout<<-1<<endl;
        else cout<<high<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}