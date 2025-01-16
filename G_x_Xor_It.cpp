#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+5;
struct node{
    int next[2];
    int endpoint;
    node(){
        memset(next,0,sizeof(next));
        endpoint=0;
    }
}trie[N*2];

int root=0;
int last=0;
const int NN=31;
void Add(int val){
    int cur=root;
    for(int i=NN;i>=0;i--){
        bool c=(1<<i)&val;
        if(trie[cur].next[c]){
            cur=trie[cur].next[c];
        }
        else{
            trie[cur].next[c]=++last;
            cur=last;
        }
    }
    trie[cur].endpoint++;
}
int query(int val){
    int cur=root;
    int ans=0;
    for(int i=NN;i>=0;i--){
        bool c=(1<<i)&val;
        c=(c^1);
        if(trie[cur].next[c]){
            cur=trie[cur].next[c];
            ans|=(1<<i);
        }
        else{
            cur=trie[cur].next[c^1];
        }
    }
    return ans;
}
void cleartrie(){
    last=0;
    memset(trie,0,sizeof(trie));
}
void solve(){
    test{
        cleartrie();
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pre=0;
        int ans=0;
        Add(0);
        for(int i=0;i<n;i++){
            pre^=a[i];
            ans=max(ans,query(pre^k));
            Add(pre);
        }
        cout<<(ans^k)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}