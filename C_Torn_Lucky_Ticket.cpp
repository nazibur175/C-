#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=6;
void solve(){
    int n;
    cin>>n;
    vector<string>s[N];
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int sz=str.size();
        s[sz].push_back(str);
    }
    int ans=0;
    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            int len=i+j;
            if(len&1) continue;
            map<int,int>m;
            for(auto x:s[i]){
                int sum=0;
                for(int ii=0;ii<i;ii++){
                    if(ii<len/2) sum+=x[ii]-'0';
                    else sum-=x[ii]-'0';
                }
                m[sum]++;
            }
            map<int,int>mm;
            for(auto x:s[j]){
                int sum=0;
                for(int ii=0;ii<j;ii++){
                    if(i+ii<len/2) sum-=x[ii]-'0';
                    else sum+=x[ii]-'0';
                }
                mm[sum]++;
            }
            for(auto [sum,f]:m){
                ans+=f*mm[sum];
            }
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}