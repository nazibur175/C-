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
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[0]) cnt++;
        }
        int l=0;
        int r=n;
        string ans;
        ans.push_back(s[0]);
        while (r-l>1)
        {
            int mid= (l+r)/2;
            string temp;
            for(int i=0;i<=mid;i++) temp.push_back(s[i]);
            string ss = temp + "#" + s;
            vector<int> v = create_lps(ss);
            int occur=0;
            for(auto x:v) {
                if(x==temp.size()) occur++;
            }
            if(occur==cnt){
                l=mid;
                ans=temp;
            }
            else r=mid;
        }
        cout<<ans<<endl;
        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}