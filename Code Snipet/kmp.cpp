#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int> create_lps(string &s){
    int n=s.size();
    vector<int>lps(n);
    int in=0;
    for(int i=1;i<n;){
        if(s[i]==s[in]){
            lps[i]=in+1;
            in++;
            i++;
        }
        else{
            if(in!=0){
                in=lps[in-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}
void solve(){
    string s;
    cin>>s;
    vector<int>lps=create_lps(s);
    for(auto it:lps){
        cout<<it<<" ";
    }
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}