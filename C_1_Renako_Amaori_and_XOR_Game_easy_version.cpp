#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            cnt1^=a[i];
            cnt2^=b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]) continue;
            else{
                if((i+1)%2==1 && cnt1==0){
                    cnt1^=1;
                    cnt2^=1;
                }
                else if((i+1)%2==0 && cnt2==0){
                    cnt1^=1;
                    cnt2^=1;
                }
            }
        }
        if(cnt1==cnt2){
            cout<<"Tie"<<endl;
        }
        else if(cnt1>cnt2){
            cout<<"Ajisai"<<endl;
        }
        else cout<<"Mai"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}