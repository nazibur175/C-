#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>m;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            m[a[i]]=i;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(i==a[i]) continue;
            else if(a[a[i]]==i){
                continue;
            }
            else {
                cnt++;
                //cout<<a[i]<<" "<<m[i]<<endl;
                int x=a[i];
                int y=m[i];
                swap(a[x],a[y]);
                m[a[x]]=x;
                m[a[y]]=y;  
            }
        }
        cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}