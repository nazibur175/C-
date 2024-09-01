#include<bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
#define   int             long long int
#define   endl            '\n'
#define   mod             1000000007
#define   pb              push_back
#define   operation();    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define   ff              first
#define   ss              second
#define   srt             sort(ar,ar+n)
#define   yes             cout<<"YES"<<endl;
#define   no              cout<<"NO"<<endl;
#define   cn              for(int i=0;i<n;i++) cin>>ar[i]
const int  inf=10e+15;

int dx[8] = {-1,0,1,1,1,0,-1,-1};
int dy[8] = {1,1,1,0,-1,-1,-1,0};
int  dx1[4] = {0,1,0,-1};
int  dy1[4] = {1,0,-1,0};
int  ax[27];
int  ar[500001];
int arr[200001];

int  a,b,c,d,e,f,t,k,g,h,n,m,i,j;
//vector<int>v;
set<int >st;
int  gcd(int  a,int  b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int32_t main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
       int n,k;
       cin>>n>>k;
       if(k==0)
       {
           for(int i=1;i<=n;i++) cout<<i<<' ';
           cout<<endl;
           continue;
       }
       if(k==n||k==n-1) cout<<"-1"<<endl;
       else
       {
           int j=1;
           for(int i=n;i>k+1;i--)
                cout<<i<<' ';
           for(int i=1;i<=k+1;i++) cout<<i<<' ';
           cout<<endl;
       }
    }
}

