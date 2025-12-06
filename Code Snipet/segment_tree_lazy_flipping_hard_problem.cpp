//https://www.codechef.com/problems/EQUAKE
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin>>t; while(t--)
const int N=8e5+9;
const int inf = 1e10;
struct node{
    // int ans,v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11;
    int v[14];
    int ans;
};
node arr[N];
int lazy[4*N];
node tree[4*N];
struct Seg_tree
{
    #define rt ((root<<1)|1)
    #define lf (root<<1)
    Seg_tree(){}
    inline void push(int root, int lo, int hi){
        lazy[root]%=12;
        if(lazy[root]==0) {
                return ;
        }
        
        int temp[12];
        int in = lazy[root];
        for(int i=0; i<12; i++)
            temp[i] = tree[root].v[(i+in)%12];
        for(int i=0; i<12; i++)
            tree[root].v[i] = temp[i];
        tree[root].ans = tree[root].v[0];
        if(lo!=hi){
            lazy[lf] = (lazy[lf] + lazy[root]) % 12;
            lazy[rt] = (lazy[rt] + lazy[root]) % 12;
        }
        lazy[root]=0;
    }
    inline int milao(int x,int y){
        return max(x,y);
    }
    inline void prop(int root){
        // tree[root] = tree[lf] + tree[rt];
        tree[root].ans = max(tree[lf].ans , tree[rt].ans);
        for(int i=0;i<12;i++){
            tree[root].v[i]=max(tree[lf].v[i],tree[rt].v[i]);
        }
    }
    void build(int root, int lo,int hi){
        lazy[root] = 0;
        if(lo==hi){
            tree[root].ans=arr[lo].v[0];
            for(int i=0;i<12;i++){
                tree[root].v[i]=arr[lo].v[i];
            }
            return ;
        }
        int mid = (lo+hi)>>1;
        build(lf,lo,mid);
        build(rt,mid+1,hi);
        prop(root);
    }
    void update(int root, int lo,int hi, int i, int j, int val){
        push(root, lo, hi);
        if(j<lo || hi<i) return ;
        if(i<=lo && hi<=j){
            lazy[root] += val;
            push(root, lo, hi);
            return ;
        }
        int mid = (lo+hi)>>1;
        update(lf,lo,mid,i,j,val);
        update(rt,mid+1,hi,i,j,val);
        prop(root);
    }

    int query(int root, int lo,int hi, int i,int j){
        push(root, lo, hi);
        if(i>hi || lo>j) {
            return 0;
        }
        if(i<=lo && hi<=j) {
            return tree[root].ans ;
        }
        int mid = (lo+hi)>>1;
        return milao(query(lf,lo,mid,i,j), query(rt,mid+1, hi, i, j));
    }
};
int string_to_num(string s){
    int num=0;
    for(int i=0;i<s.size();i++){
        num= (num*10) + s[i]-'0';
    }
    return num;
}
void solve(){
     int n;
     cin>>n;
     vector<string>v;
     for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
     }
     for(int i=0;i<n;i++){
        string s=v[i];
        for(int j=0;j<12;j++){
            arr[i+1].v[j] = string_to_num(s);
            s= s + s.front();
            string ss;
            for(int i=1;i<s.size();i++){
                ss.push_back(s[i]);
            }
            s=ss;
        }
     }

     Seg_tree seg;
     seg.build(1,1,n);
     int m;
     cin>>m;
     while(m--){
        int type;
        cin>>type;
        // update
        if(type==0){
            int l,r,val;
            cin>>l>>r>>val;
            l++;
            r++;
            seg.update(1,1,n,l,r,val);
            // for(int i=1;i<=n;i++){
            //     cout<<seg.query(1,1,n,i,i)<<" ";
            // }
            // cout<<endl;
        }
        else {
            int l,r;
            cin>>l>>r;
            l++;
            r++;
            cout<<seg.query(1,1,n,l,r)<<endl;
            
        }
     }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}