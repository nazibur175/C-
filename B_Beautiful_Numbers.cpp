#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        int sum=0;
        for(char x:s){
            sum+=x-'0';
        }
        int ans=0;
        if(s[0]>'1'){
            s[0]--;
            sort(s.begin(),s.end());
            for(int i=n-1;i>=0;i--){
                if(sum>9){
                    sum-=s[i]-'0';
                    ans++;
                }
                else break;
            }
        }
        else {
            sort(s.begin()+1,s.end());
            for(int i=n-1;i>=1;i--){
                if(sum>9){
                    sum-=s[i]-'0';
                    ans++;
                }
                else break;
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