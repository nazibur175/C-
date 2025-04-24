#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n;
        vector<char>v;
        for(int i=0;i<n;i++){
            char x=s[i];
            if(v.size()==0)v.push_back(x);
            else if(v.back()!=x)v.push_back(x);
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i]=='1' && v[i+1]=='0'){
                swap(v[i],v[i+1]);
                break;
            }
        }
        char ch='0';
        for(int i=0;i<v.size();i++){
            if(v[i]==ch){
                continue;
            }
            else{
                ans++;
                ch=v[i];
            }
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