#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal(int n,int k){
    int c=1;
    while (1)
    {
        int x=(c+1)/2;
        if((k-x)<=0 || (k+x)>n) return -1;
        if((k-x)%2 && (k+x)%2) return c;
        c++;
    }
}
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else {
            int c=cal(n,k);
            if(c==-1) cout<<-1<<endl;
            else {
                cout<<3<<endl;
                int x=c/2;
                cout<<1<<" "<<k-x<<" "<<k+x+1<<endl;
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