#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<string>ans;
        for(int i=1;i<=26;i++){
            for(int j=1;j<=26;j++){
                for(int k=1;k<=26;k++){
                    if((i+j+k)==n){
                        char ch1 = 'a'+i-1;
                        char ch2 = 'a'+j-1;
                        char ch3 = 'a'+k-1;
                        string s;
                        s.push_back(ch1);
                        s.push_back(ch2);
                        s.push_back(ch3);
                        ans.push_back(s);

                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}