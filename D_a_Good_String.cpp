#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string  s;
int getcost(int l,int r,char ch){
    int c=0;
    for(int i=l;i<=r;i++){
        if(s[i]!=ch) c++;
    }
    return c;
}
int getmin(int l,int r, char ch){
    if(l==r){
        if(s[l]==ch) return 0;
        else return 1;
    }
    int mid=(l+r)/2;
    return min((getcost(l,mid,ch)+getmin(mid+1,r,ch+1)),(getcost(mid+1,r,ch)+getmin(l,mid,ch+1)));
}
void solve(){
    test{
        int n;
        cin>>n;
        cin>>s;
        int l=0;
        int r=n-1;
        cout<<getmin(l,r,'a')<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}