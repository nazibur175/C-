#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        map<string,int>m;
        vector<string>v;
        vector<string>vv;
        vector<string>vvv;

        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
            m[s]++;
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            vv.push_back(s);
            m[s]++;
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            vvv.push_back(s);
            m[s]++;
        }

        int ans1=0;
        int ans2=0;
        int ans3=0;
        for(auto x:v) {
            if(m[x]==1) ans1+=3;
            else if(m[x]==2) ans1+=1;
        }

        for(auto x:vv) {
            if(m[x]==1) ans2+=3;
            else if(m[x]==2) ans2+=1;
        }

        for(auto x:vvv) {
            if(m[x]==1) ans3+=3;
            else if(m[x]==2) ans3+=1;
        }
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}