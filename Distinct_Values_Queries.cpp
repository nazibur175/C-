#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
int a[Ma];
int tree[Ma*3];
set<int> tr[Ma*3];
// call it by init(root, array start , array end);
set<int> add(set<int>&x, set<int>&y){
    set<int>s;
    s=x;
    for(auto it:y){
        s.insert(it);
    }
    return s;
}
void init(int root, int b , int e){
    if(b==e){
        //tree[root]=a[b];
        tr[root].insert(a[b]);
        return ;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1, e);
    tr[root]=add(tr[left] , tr[right]);
}
// call it by query(root,array start , array end , query start , query end);
set<int> query(int root, int b , int e , int i, int j){
    if(i>e || j<b ){
        set<int>s;
        return s;
    }
    if(b>=i && e<=j){
        return tr[root];
    }
    int left = 2*root;
    int right = 2*root + 1;
    int mid = (b+e)/2;
    set<int> p1 = query(left , b , mid, i, j);
    set<int>p2 = query(right, mid+1, e , i, j);
    return add(p1,p2);
}
//call it by update(root,array start , array end , query index , val);
void update(int root , int b , int e , int i , int newval){
    if(i>e || i<b ){
        return ;
    }
    if(b>=i && e<=i){
        tr[root].insert( newval);
        return;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    update(left , b , mid , i , newval);
    update(right , mid+1 , e , i , newval);
    tr[root] = add(tr[left] , tr[right]);
}
void solve(){
        int n,q;
        cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    init(1,1,n);
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        set<int>s=query(1,1,n,x,y);
        cout<<s.size()<<endl;
        //cout<<query(1,1,n,x,y)<<endl;
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
