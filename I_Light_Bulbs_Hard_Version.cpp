#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int my_rand(int l, int r)
    {
    	return uniform_int_distribution<int>(l, r) (rng);
    }
void solve(){
    test{
        int n;
        cin>>n;
        int a[2*n+5];
        map<int,int>mp;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(mp[a[i]]){
                a[i]=mp[a[i]];
            }
            else{
                int temp=my_rand(1,1e17);
                mp[a[i]]=temp;
                a[i]=temp;
            }
        }
        map<int,int>m;
        int diff[2*n+5]={0};
        int l=0;
        int r=0;
        int ans1=0;
        int ans2=1;
        int pre=0;
        for(int i=0;i<2*n;i++){
            pre^=a[i];
            if(pre==0){
                ans1++;
                r=i;
                int temp=0;
                int cnt=0;
                for(int j=l;j<=r;j++){
                    temp+=diff[j];
                    if(temp==0){
                        cnt++;
                    }
                }
                ans2*=cnt;
                ans2%=mod;
                l=i+1;
            }
            else if(m[pre]){
                diff[m[pre]]+=1;
                diff[i+1]=-1;
            }
            m[pre]=i+1;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}