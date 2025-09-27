#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int flag=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
                if(cnt>=k){
                    flag=0;
                    break;
                }
            }
            else{
                cnt=0;
            }

        }
        if(flag){
            cout<<"YES"<<endl;
            int temp=1;
            vector<int>ans(n+1,0);
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    ans[i]=temp;
                    temp++;
                }
            }
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    ans[i]=temp;
                    temp++;
                }
            }
            for(int i=0;i<n;i++){
                cout<<ans[i];
                if(i!=n-1){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}