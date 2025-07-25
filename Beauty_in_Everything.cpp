#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test int t;cin>>t;while(t--)
void solve(){
    test{
        int N;
        string A;
        cin>>N>>A;
        int len0=0;
        {
            int l=0,cnt0=0;
            for(int r=0;r<N;r++){
                if(A[r]=='0') cnt0++;
                while(cnt0>1){
                    if(A[l]=='0') cnt0--;
                    l++;
                }
                len0=max(len0,r-l+1);
            }
        }
        int len1=0;
        {
            int l=0;
            int cnt1=0;
            for(int r=0;r<N;r++){
                if(A[r]=='1') cnt1++;
                while(cnt1>1){
                    if(A[l]=='1') cnt1--;
                    l++;
                }
                len1=max(len1,r-l+1);
            }
        }
        int ans=max(len0,len1);
        for(int i=0;i+3<N;i++){
            string sub=A.substr(i,4);
            if(sub=="0101"||sub=="1010"){
                ans=max(ans,4ll);
                break;
            }
        }
        cout<<ans<<"\n";
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
