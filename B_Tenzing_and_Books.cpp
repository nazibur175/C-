#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        deque<int>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        int temp=0;
        int ff=0;
        while(1){
            int f=0;
            while(!a.empty() && (a.front()|x)==x){
                temp|=a.front();
                a.pop_front();
                f=1;
            }
            while(!b.empty() && (b.front()|x)==x){
                temp|=b.front();
                b.pop_front();
                f=1;
            }
            while(!c.empty() && (c.front()|x)==x){
                temp|=c.front();
                c.pop_front();
                f=1;
            }
            if(temp==x){
                ff=1;
                break;
            }
            if(f==0)break;
        }
        if(ff)cout<<"Yes\n";
        else cout<<"No\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}