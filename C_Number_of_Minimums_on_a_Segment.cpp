#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 1000000;
pair<int,int> inf={1e17,0};
int a[Ma];
//int tree[Ma*3];
vector<pair<int,int>>v(Ma*3,{0,0});
// call it by init(root, array start , array end);
pair<int,int> operation(pair<int,int>x , pair<int,int>y){
    if(x.first==y.first){
        return {x.first,x.second+y.second};
    }
    else if(x.first>y.first) return y;
    else return x;
}
void init(int root, int b , int e){
    if(b==e){
        //tree[root]=a[b];
        v[root]={a[b],1};
        return ;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1, e);
    //tree[root]=min(tree[left] , tree[right]) ;
    v[root]=operation(v[left],v[right]);
}
// call it by query(root,array start , array end , query start , query end);
pair<int,int> query(int root, int b , int e , int i, int j){
    if(i>e || j<b ){
        return inf;
    }
    if(b>=i && e<=j){
        return v[root];
    }
    int left = 2*root;
    int right = 2*root + 1;
    int mid = (b+e)/2;
    pair<int,int> p1 = query(left , b , mid, i, j);
    pair<int,int> p2 = query(right, mid+1, e , i, j);
    return operation(p1,p2);
}
//call it by update(root,array start , array end , query index , val);
void update(int root , int b , int e , int i , int newval){
    if(i>e || i<b ){
        return ;
    }
    if(b>=i && e<=i){
        v[root]= {newval,1};
        return;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    update(left , b , mid , i , newval);
    update(right , mid+1 , e , i , newval);
    v[root] = operation(v[left] , v[right]);
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
        int x,k,u;
        cin>>x>>k>>u;

        if(x==1){
            // k=index u=val
            // index   val
            k++;
            update(1,1,n,k,u);
            }
        else{
            // k=l   u=r
            // range
            k++;
            //u++;
            pair<int,int>ans = query(1,1,n,k,u);
            cout<<ans.first<<" "<<ans.second<<endl;
            //cout<<query(1,1,n,k,u).first<<" "<<<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
