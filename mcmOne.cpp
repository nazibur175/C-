#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int n;
int cal(int beg,int end){
    if(beg>end) return 0;
    if(beg==end) return s[beg]-'0';
    int res=0;
    for(int i=beg+1;i<end;i++){
        if(s[i]>='0' && s[i]<='9') continue;
        int val1= cal(beg,i-1);
        int val2= cal(i+1,end);
        int val=0;
        if(s[i]=='+') val=val1+val2;
        else val = val1*val2;
        res = max(res,val);
    }
    return res;
}

void solve(){
    cin>>s;
    n=s.size();
    int ans=cal(0,n-1);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}