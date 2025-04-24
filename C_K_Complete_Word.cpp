#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<int,map<char,int>>m;
        int half=(k+1)/2;
        for(int i=0;i+k-1<n;i+=k){
            int in=0;
            for(int j=i;j<(i+half);j++){
                int l=j;
                int r=i+k-in-1;
                in++;
                m[l%k][s[l]]++;
                if(l!=r){
                    m[l%k][s[r]]++;
                }
            }
        }
        int ans=0;
        for(auto it:m){
            int cnt=0;
            int total=0;
            for(auto it2:it.second){
                total+=it2.second;
                cnt = max(cnt, it2.second);
            }
            ans+= total-cnt;
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}
// 0123456
// wudixia 
// oxingxi
// ngheclp
//5+4+5+2