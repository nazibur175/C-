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
        int cnt1=0;
        int cnt2=0;
        int l=0;
        int r=0;
        int preb[n+1]={0};
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                sum++;
            }
            preb[i]=sum;
        }
        sum=0;
        int prea[n+1]={0};
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                sum++;
            }
            prea[i]=sum;
        }
        
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'){
                r=i;
                break;
            }
        }
        //  cout<<l<<" "<<r<<endl;

        for(int i=l;i<=r;i++){
            if(s[i]=='b'){
                cnt1+= min(prea[i]-(l>0?prea[l-1]:0),prea[r]-prea[i]);
            }
        }
        l=0;
        r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='b'){
                r=i;
                break;
            }
        }
        //  cout<<l<<" "<<r<<endl;
        for(int i=l;i<=r;i++){
            if(s[i]=='a'){
                // cnt2= min(preb[i]-preb[l],preb[r]-preb[i]);
                cnt2+= min(preb[i]-(l>0?preb[l-1]:0),preb[r]-preb[i]);
            }
        }
        // cout<<cnt1<<" "<<cnt2<<endl;
        cout<<min(cnt1,cnt2)<<endl;   
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}