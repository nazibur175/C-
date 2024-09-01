#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
int a[Ma];
int tree[Ma*3];

void init(int root, int b , int e){
    if(b==e){
        tree[root]=a[b];
        return ;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1, e);
    tree[root]= (tree[left] ^ tree[right]);
}
int query(int root, int b , int e , int i, int j){
    if(i>e || j<b ){
        return 0;
    }
    if(b>=i && e<=j){
        return tree[root];
    }
    int left = 2*root;
    int right = 2*root + 1;
    int mid = (b+e)/2;
    int p1 = query(left , b , mid, i, j);
    int p2 = query(right, mid+1, e , i, j);
    return (p1 ^ p2);
}
void solve(){
    {
        int n,q;
        cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    init(1,1,n);
    // cout<<"Case "<<tt<<":"<<endl;

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        // printf("Case %d:\n",tt);
        cout<<query(1,1,n,l,r)<<endl;
    }
    
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}