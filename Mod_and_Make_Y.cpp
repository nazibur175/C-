#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=400+5;
const int mx = 5e4+9;
int a[N];
int aa[N];
int n,x,y;
// int dp[N][mx];
// int cal(int pos,int rem){
//     if(rem<y) return 0;
//     if(rem==y) return 1;
//     if(pos<0) return rem==y;
//     if(dp[pos][rem]!=-1) return dp[pos][rem];
//     int ans = cal(pos-1,rem)|cal(pos-1, rem%a[pos]);
//     return dp[pos][rem]=ans;
// }
// void clear(int lim){
//     for(int i=0;i<=lim;i++){
//             for(int j=0;j<=x;j++){
//                 dp[i][j]=-1;
//             }
//         }
// }
void solve(){
    test{
        // y hote hobe
        // x ke mod kore
        cin>>n>>x>>y;
        for(int i=0;i<n;i++){
            cin>>aa[i];
        }
        int mn=1e18;
        vector<int>v;
        int f=0;
        set<int>s;
        for(int i=0;i<n;i++){
            mn=min(mn,aa[i]);
            if(mn<=y) continue;
            if(f==0){
                //clear(i+1);
                s.insert(aa[i]);
                int j=0;
                for(auto xx:s){
                    a[j]=xx;
                    j++;
                }
                f=cal(j-1,x);
            }
            if(f) v.push_back(i+1);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=v.size()-1) cout<<" ";
        }
        cout<<endl;
        //cout<<"OK"<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}