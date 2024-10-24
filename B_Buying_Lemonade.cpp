#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        deque<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        int cnt=0;
        int badhobe =0;
        while (cnt<k)
        {
            int lagbe = k-cnt;
            int parbo = (a.front()-badhobe)*a.size();
            if(parbo>=lagbe){
                ans+= lagbe;
                break;
            }
            else{
                ans+=parbo;
                cnt+=parbo;
                badhobe = a.front();
                while(a.size() && a.front()==badhobe){
                    a.pop_front();
                    ans++;
                }
            }
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