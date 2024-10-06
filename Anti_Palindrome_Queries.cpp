#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];

        int pre1[n+1]={0};
        int pre2[n+1]={0};
        int pre3[n+1]={0};

        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                cnt1++;
            }
            else if(a[i]==2){
                cnt2++;
            }
            else {
                cnt3++;
            }
                pre1[i]=cnt1;
                pre2[i]=cnt2;
                pre3[i]=cnt3;
        }

        while (q--)
        {
            int l,r;
            cin>>l>>r;
            if((r-l+1)%2==1) cout<<"No"<<endl;
            else{
                int x=pre1[r]-pre1[l-1];
                int y=pre2[r]-pre2[l-1];
                int z=pre3[r]-pre3[l-1];
                
                int c = (r-l+1);
                if((x+y)==(c/2) || (x+z)==(c/2) || (y+z)==(c/2)) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}