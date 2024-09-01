#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
int a[Ma];
// int tree[Ma*3];
pair<int,int>tree[Ma];

void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node].first=a[l];
        tree[node].second=0; return ;
    }
    int m=(l+r)/2;
    int left=node*2;
    int right =node*2+1;
    build(left,l,m);
    build(right,m+1,r);
    if(tree[left].second==0&&tree[right].second==0)
    {
        tree[node].first=tree[left].first|tree[right].first;
        tree[node].second=1;
    }
    else
    {
        tree[node].first=tree[left].first^tree[right].first;
        tree[node].second=0;
    }
}
void update(int node,int l,int r,int x,int val)
{
    if(x<l||x>r) return;
    if(x<=l&&x>=r)
    {
        tree[node].first=val;
        tree[node].second==0;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(l+r)/2;
    update(left,l,mid,x,val);
    update(right,mid+1,r,x,val);
     if(tree[left].second==0&&tree[right].second==0)
    {
        tree[node].first=tree[left].first|tree[right].first;
        tree[node].second=1;
    }
    else
    {
        tree[node].first=tree[left].first^tree[right].first;
        tree[node].second=0;
    }
}
void solve(){
    {
        int n,q;
        cin>>n>>q;
        n=pow(2,n);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    build(1,1,n);

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        // cout<<query(1,1,n,l,r)<<endl;
        cout<<tree[1].first<<endl;
    }
    
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}