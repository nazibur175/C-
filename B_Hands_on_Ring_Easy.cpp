#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int l=1;
int r=2;
int n;
int inf=1e18;
int cal(){
    char ch;
    int x;
    cin>>ch>>x;

    if(ch=='L'){
        int cnt1=0;
        int temp=l;
        int f=1;
        while (temp!=x)
        {
            temp++;
            if(temp==n+1) temp=1;
            cnt1++;
            if(temp==r){
                f=0;
                cnt1=inf;
                break;
            }

        }

        int cnt2=0;
        temp=l;
        f=1;
        while (temp!=x)
        {
            temp--;
            if(temp==0)temp=n;
            cnt2++;
            if(temp==r){
                f=0;
                cnt2=inf;
                break;
            }
        }
        l=x;
        return min(cnt1,cnt2);
    }
    else{
        int cnt1=0;
        int temp=r;
        int f=1;
        while (temp!=x)
        {
            temp++;
            if(temp==n+1) temp=1;
            cnt1++;
            if(temp==l){
                f=0;
                cnt1=inf;
                break;
            }

        }

        int cnt2=0;
        temp=r;
        f=1;
        while (temp!=x)
        {
            temp--;
            if(temp==0)temp=n;
            cnt2++;
            if(temp==l){
                f=0;
                cnt2=inf;
                break;
            }
        }
      
        r=x;
        return min(cnt1,cnt2);

    }
}
void solve(){
    int q;
    cin>>n>>q;
    int ans=0;
    while (q--)
    {
        ans+=cal();
    }
    cout<<ans<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}