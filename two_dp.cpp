#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string str;
int cal2(int pos,int is_small){
    if(pos==2) return 1;
    int low=0;
    int high=str[pos]-'0';
    if(is_small) high=9;
    int res=0;
    for(int i=low;i<=high;i++){
        int val = cal2(pos+1,is_small|(i<high));
        res+=val;
    }
    return res;
}
int cal(int pos,int is_small, int has_started){
    if(pos==2) return 0;
    int low=0;
    int high=str[pos]-'0';
    int res=0;
    if(is_small) high=9;
    for(int i=low;i<=high;i++){
        int val = cal(pos+1,is_small|(i<high),has_started|(i!=0));
        if(has_started && i==0){
            // how many digit after this position
            val+= cal2(pos+1,is_small|(i<high));
        }
            res+=val;
    }
    return res;
}
void solve(){
    string a,b;
    cin>>a>>b;
    str=a;
    int ans = cal(0,0,0);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}