#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=105;
void solve(){
    int pre[N];
    pre[1]=1;
    map<int,int>m;
    m[1]=1;
    for(int i=2;i<N;i++){
        pre[i]=pre[i-1]+8*(i-1);
        m[pre[i]]=1;
    }
    //for(int i=1;i<N;i++) cout<<pre[i]<<" ";
    //cout<<endl;
    test{
        int n;
        cin>>n;
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x; 
            sum+=x;
            if(m[sum]){
                ans++;
                //cout<<i<<" ";
            }
        }
        //cout<<endl;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}