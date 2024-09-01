#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+9];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one=(one^(a[i+1]));
        }
        //cout<<"ok"<<endl;
        int prexor[n+9]={0};
        for(int i=1;i<=n;i++){
            prexor[i]=(prexor[i-1]^a[i]);
        }
        int q;
        cin>>q;
        while (q--)
        {
            int x;
            cin>>x;
            if(x==1){
            int l,r;
            cin>>l>>r;
                one^=(prexor[r]^prexor[l-1]);
            }
            else {
                int g;
                cin>>g;
                if(g==1) cout<<one<<" ";
                else cout<<(prexor[n]^one)<<" ";
            }

        }
        cout<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}