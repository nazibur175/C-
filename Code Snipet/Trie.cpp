#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const int N=1e4+5;
struct node{
    int next[26];
    int endpoint;
    node(){
        memset(next,0,sizeof(next));
        endpoint=0;
    }
}trie[N*26];

int root=0;
int last=0;
void Add(string s){
    int cur=root;
    for(auto it:s){
        int c=it-'a';
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
int query(string s){
    int cur=root;
    for(auto it:s){
        int c=it-'a';
        if(trie[cur].next[c]){
            cur=trie[cur].next[c];
        }
        else{
            return 0;
        }
    }
    return trie[cur].endpoint;
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        Add(s);
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<query(s)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}