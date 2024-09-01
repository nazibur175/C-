#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[4]={0};

        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x>0) a[0]=1;
            if(x<0) a[1]=1;
            if(y>0) a[2]=1;
            if(y<0) a[3]=1;
        }
        int f=0;
        for(int i=0;i<4;i++){
            if(a[i]==0){
                f=1;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}