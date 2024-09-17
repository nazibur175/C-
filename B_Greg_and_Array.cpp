#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    
    int left[m+1];
    int right[m+1];
    int val[m+1];

    for(int i=1;i<=m;i++) cin>>left[i]>>right[i]>>val[i];

    int diff_query[m+2]={0};
    while (k--)
    {
        int l,r;
        cin>>l>>r;
        diff_query[l]++;
        diff_query[r+1]--;
    }


    int pre_diff=0;
    for(int i=1;i<=m;i++){
        pre_diff+=diff_query[i];
        diff_query[i]=pre_diff;
    }

    //for(int i=1;i<=m;i++) cout<<diff_query[i]<<" ";

    int diff[n+1]={0};
    for(int i=1;i<=m;i++){
        int times= diff_query[i];
        int l=left[i];
        int r=right[i];
        int x=val[i];
        diff[l]+= times*x;
        diff[r+1]-= times*x;

    }
    int pre_dif=0;
    for(int i=1;i<=n;i++){
        pre_dif+=diff[i];
        a[i]+=pre_dif;
    }
    
    for(int i=1;i<=n;i++){
        cout<<a[i];
        if(i!=n) cout<<" ";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}