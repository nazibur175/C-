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
        int c=0;
        int ans=0;
        int a[n]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='B') a[i]=1;
        }

        int i=0;
        int j=k-1;
        for(int i=0;i<=j;i++){
            ans+=a[i];
        }
        c=ans;
        i++;
        j++;
        while (j<n)
        {
            c-=a[i-1];
            c+=a[j];
            ans=max(ans,c);
            i++;
            j++;
        }
        //cout<<ans<<endl;
        cout<<max(0LL,k-ans)<<endl;
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}