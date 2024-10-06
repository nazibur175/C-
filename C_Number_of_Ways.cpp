#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pre[n+1]={0};

    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    int suf[n+2]={0};
    memset(suf,0,sizeof(suf));
    map<int,vector<int>>m;
    for(int i=n;i>=1;i--){
        suf[i]=suf[i+1]+a[i-1];
        m[suf[i]].push_back(n-i+1);
       
       
    }
    //for(auto x:m[0]) cout<<x<<" ";
    //cout<<endl;

    int c=0;
    for(int i=1;i<=n;i++){
        int agerTuku = pre[i];
        int porerTuku = pre[n]-pre[i];
        if(porerTuku%2==0 && agerTuku==porerTuku/2 && !m[porerTuku/2].empty()){
            int in = n-i;
            in--;
            int cnt = upper_bound(m[porerTuku/2].begin(),m[porerTuku/2].end(),in)-m[porerTuku/2].begin();
            //cout<<in<<" "<<cnt<<endl;
            //cout<<cnt<<endl;
            c+= cnt;
        }
    }
    cout<<c<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}