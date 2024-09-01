#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int need_2=0;
        for(int i=1;i<=n;i++){
            if(((i*(i+1))/2) <=k){
                need_2=i;
            }
            else break;
        }
         int extra = k-(need_2*(need_2+1))/2;
         //int extra = k-need_2;
         //cout<<need_2<<endl;
         //cout<<extra<<endl;
        for(int i=1;i<=n;i++){
             if(i<=need_2) cout<<"2 ";
             else if(i==need_2+1){
                int x= (need_2-extra)*2 + 1;
                cout<<-x<<" ";
            }
            else cout<<"-1000 ";
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