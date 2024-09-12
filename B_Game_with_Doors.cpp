#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y;
        int l,r;
        cin>>x>>y;
        cin>>l>>r;
        int left=min(l,x);
        int right=max(y,r);
        int a[100+5]={0};
        for(int i=x;i<=y;i++){
            a[i]++;
        }
        for(int i=l;i<=r;i++){
            a[i]++;
        }
        int cnt=0;
        int first=0;
        int last=0;
        for(int i=left;i<=right;i++){
            if(a[i]==2){
                cnt++;
                if(first==0) 
                    first=i;
                last=i;
            }
        }
        if((first-1)>=left) cnt++;
        if((last+1)<=right) cnt++;

        //cout<<first<<endl;
        //cout<<last<<endl;
        cout<<max(1ll,cnt-1)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}