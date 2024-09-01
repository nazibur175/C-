#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int Ma = 200009;
int a[Ma];
int barr[Ma];
int tree[Ma*3];
int tree2[Ma*3];

void init1(int root, int b , int e){
    if(b==e){
        tree[root]=a[b];
        return ;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    init1(left,b,mid);
    init1(right,mid+1, e);
    tree[root]= min(tree[left],tree[right]);
}
void init2(int root, int b , int e){
    if(b==e){
        tree2[root]=barr[b];
        return ;
    }
    int left = 2*root;
    int right = 2*root+1;
    int mid = (b+e)/2;
    init2(left,b,mid);
    init2(right,mid+1, e);
    tree2[root]= max(tree2[left],tree2[right]);
}
int query1(int root, int b , int e , int i, int j){
    if(i>e || j<b ){
        return INT64_MAX;
    }
    if(b>=i && e<=j){
        return tree[root];
    }
    int left = 2*root;
    int right = 2*root + 1;
    int mid = (b+e)/2;
    int p1 = query1(left , b , mid, i, j);
    int p2 = query1(right, mid+1, e , i, j);
    return min(p1,p2);
}
int query2(int root, int b , int e , int i, int j){
    if(i>e || j<b ){
        return INT64_MIN;
    }
    if(b>=i && e<=j){
        return tree2[root];
    }
    int left = 2*root;
    int right = 2*root + 1;
    int mid = (b+e)/2;
    int p1 = query2(left , b , mid, i, j);
    int p2 = query2(right, mid+1, e , i, j);
    return max(p1,p2);
}

void solve(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    //vector<int>v[100000];
    
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
        cin>>a[i];
        barr[i]=a[i];
        //v[a[i]].push_back(i);
        }
        vector<int>diff(n+9,0);
        diff[n]=n;
        for(int i=n-1;i>=1;i--){
            if(a[i]==a[i+1]){
                diff[i]=diff[i+1];
            }
            else diff[i]=i;
        }
   
    init1(1,1,n);
    init2(1,1,n);
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans1=query1(1,1,n,l,r);
        int ans2=query2(1,1,n,l,r);
        if(ans1==ans2) cout<<"-1 -1"<<endl;
        else {
            //cout<<ans1<<" "<<ans2<<endl;
            // int xx=0;
            // int yy=0;
            // for(int i=l;i<=r;i++){
            //     if(a[i]==ans1){
            //         xx=i;
            //     }
            //     if(a[i]==ans2){
            //         yy=i;
            //     }
            // }
            // cout<<xx<<" "<<yy<<endl;
            cout<<l<<" "<<diff[l]+1<<endl;
            
        }
    }
    cout<<endl;
    
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}