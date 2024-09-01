#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Endl "\n"
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORN(i,n) for(i=n;i>=1;i--)
#define FOR0(i,n) for(i=0;i<n;i++)
#define FORN0(i,n) for(i=n-1;i>=0;i--)
#define all(x) x.begin(), x.end()
#define TEST ll ttt,t;cin>>ttt;for(t=1;t<=ttt;t++)
#define Case cout<<"Case "<<t<<": ";
#define ha cout<<"yes"<<endl;
#define Ha cout<<"Yes"<<endl;
#define HA cout<<"YES"<<endl;
#define Na cout<<"No"<<endl;
#define na cout<<"no"<<endl;
#define NA cout<<"NO"<<endl;
#define input(v)   for(auto &x: v)cin>>x
#define SetBit(x,k) (x|=(1LL<<k))
#define ClearBit(x,k) (x&=~(1LL<<k))
#define CheckBit(x,k) ((x>>k)&1)
#define ChangeBit(x,k) (x^=(1LL<<k))
#define mod 1000000007
#define N 100005

int main()
{
    FAST
    ll i,j,k=1,n=0,l,z=0,x=0,r,c=0,ans=0,m,y,q;
    string str,s1,s2,s3;
    char ch,ch1,ch2,ch3,ch4;
    vector<ll>v;
    map<ll,ll>mp;
    cin>>q;
    ll a[30];
    a[0]=1;
    for(i=1;i<=29;i++)
    {
        a[i]=a[i-1]*2;
    }
    //cout<<a[29]<<endl;
    while(q--)
    {
        cin>>x>>z;
        if(x==1) mp[z]++;
        else
        {
            k=1;
            for(i=29;i>=0;i--)
            {
                y=mp[i]*a[i];
                if(z>=y) z-=y;
                else z%=a[i];
                if(z==0)
                {
                    HA;
                    k=0;
                    break;
                }
            }
            if(k) NA
        }

    }

    return 0;
}
