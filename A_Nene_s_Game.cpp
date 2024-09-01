#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int k,q;
        cin>>k>>q;
        int a[k];
        for(int i=0;i<k;i++) cin>>a[i];
        while (q--)
        {
            int x;
            cin>>x;
            int cur=x;
            int cnt=0;
            while (a[0]<=cur)
            {
                cnt=0;
                for(int i=0;i<k;i++){
                if(a[i]<=cur){
                    cnt++;
                }
                else break;
                }
            cur-=cnt;
            }
            cout<<cur<<" ";
            
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