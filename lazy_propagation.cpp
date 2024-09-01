#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int mx = 1e6;
struct info {
    int prop, sum;
} tree[mx * 3]; 
void update(int root, int b, int e, int i, int j, int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) 
    {
        tree[root].sum += ((e - b + 1) * x); 
        tree[root].prop += x; 
        return;
    }
    int Left = root * 2;
    int Right = (root * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[root].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[root].prop;
}
//call it by update(root 1,array start,array end, query start , query end, update val);
int query(int root, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[root].sum + carry * (e - b + 1); 

    int Left = root << 1;
    int Right = (root << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j, carry + tree[root].prop); 
    //prop value carried by carry variable
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[root].prop);
    return p1 + p2;
}
//call it by query(root,array begin,array end ,query start, query end,0);
void solve(){
   int n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    update(1,1,n,i,i,x);
   }
   while (q--)
    {
        int x;
        cin>>x;
        if(x==1){
            int l,r,up_val;
            cin>>l>>r>>up_val;
            update(1,1,n,l,r,up_val);
            }
        else{
            int pos;
            cin>>pos;
            int ans = query(1,1,n,pos,pos,0);
            cout<<ans<<endl;
        }
    }
   
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}