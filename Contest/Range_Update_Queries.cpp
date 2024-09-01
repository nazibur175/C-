#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
int arr[Ma];
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
    tree[root]=tree[left] + tree[right];
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
    return p1+p2;
}
void update(int root , int b , int e , int i , int newval){
    if(i>e || i<b ){
        return ;
    }
    if(b>=i && e<=i){
        tree[root] += newval;
        return;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    update(left , b , mid , i , newval);
    update(right , mid+1 , e , i , newval);
    tree[root] = (tree[left] + tree[right]);
}
void solve(){
        int n,q;
        cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=n;i>0;i--){
        a[i]= a[i]- a[i-1];
    }

    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    init(1,1,n);
    while (q--)
    {
        int x;
        cin>>x;
        if(x==1){
            int l,r,u;
            cin>>l>>r>>u;
            update(1,1,n,l,u);
            update(1,1,n,r+1,-u);
            }
        else{
            int u;
            cin>>u;
            cout<<query(1,1,n,1,u)<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}