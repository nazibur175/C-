#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        map<int,map<char,int>>m;
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++){
               m[i][s[j]]++;
            }
        }
        int q;
        cin>>q;
        cout<<"Case "<<tt<<":"<<endl;
        while (q--)
        {
            string s;
            cin>>s;
            map<char,int>temp;
            for(int i=0;i<s.size();i++){
                temp[s[i]]++;
            }
            int cnt=0;
            for(int i=1;i<=n;i++){
                int f=1;
                for(auto x:m[i]){
                    if(temp[x.first]>=x.second){
                        continue;
                    }
                    else {
                        f=0;
                        break;
                    }
                        
                }
                if(f) cnt++;
            }
            cout<<cnt<<endl;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}