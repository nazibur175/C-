#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    while (cin>>s)
    {
        //cout<<s<<endl;
        map<int,int>m;
        for(int i=0;i<s.size();i++){
            int dig = s[i]-'0';
            m[dig]++;
        }
        //for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
        //cout<<m[0]<<endl;

        if(m[0]==0){
            cout<<0<<endl;
        }
        else {
        int f=0;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=9;j++){
            if(m[j]<i){
                for(int jj=1;jj<=i;jj++) cout<<j;
                cout<<endl;
                f=1;
                break;
            }
        }
        if(f) break;
        }
        }
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}