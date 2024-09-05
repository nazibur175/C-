#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
int a[Ma];
int tree[Ma*3];
int inv1[Ma]={0};
int inv2[Ma]={0};
// call it by init(root, array start , array end);
// void init(int root, int b , int e){
//     if(b==e){
//         tree[root]=a[b];
//         return ;
//     }
//     int left = 2*root;
//     int right = 2*root+1;
//     int mid = (b+e)/2;
//     init(left,b,mid);
//     init(right,mid+1, e);
//     tree[root]=tree[left] + tree[right];
// }
// call it by query(root,array start , array end , query start , query end);
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
//call it by update(root,array start , array end , query index , val);
void update(int root , int b , int e , int i , int newval){
    if(i>e || i<b ){
        return ;
    }
    if(b>=i && e<=i){
        tree[root]= newval;
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
    int n;
    cin>>n;
    set<int>s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    map<int,int>m;
    int pos=1;
    for(auto x:s){
        m[x]=pos++;
    }
    // for(int i=1;i<=n;i++){
    //     cout<<m[a[i]]<<" ";

    // }

    for(int i=1;i<=n;i++){
        pos = m[a[i]];
        int x= query(1,1,n,pos+1,n);
        inv1[i]+=x;
        //ans+=((x*(x-1))/2);
         //cout<<x<<" ";
        update(1,1,n,pos,1);
    }

    memset(tree,0,sizeof(tree));

    for(int i=n;i>=1;i--){
        pos = m[a[i]];
        int x= query(1,1,n,1,pos-1);
        inv2[i]+=x;
        //cout<<x<<" ";
        //ans+=((x*(x-1))/2);
         //cout<<x<<" ";
        update(1,1,n,pos,1);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        //cout<<inv1[i]<<" ";
        ans+=(inv1[i]*inv2[i]);
    }
    cout<<ans<<endl;
     //cout<<endl;
    //for(int i=1;i<=n;i++){
        //cout<<inv2[i]<<" ";
    //}
     //cout<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
