#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int right[n+9]={0};
    int left[n+9]={0};

    int cnt0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else {
            if(cnt0){
                right[i+1]=1;
                cnt0--;
            }
        }
    }

    int cnt1=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1') cnt1++;
        else {
            if(cnt1){
                left[i+1]=1;
                cnt1--;
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<right[i];
    }

    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<left[i];
    }

    int leftsum[n+9]={0};
    int rightsum[n+9]={0};
    int cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=right[i];
        rightsum[i]=cnt;
    }
    cnt=0;
    for(int i=n;i>=1;i--){
        cnt+=left[i];
        leftsum[i]=cnt;
    }

    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<rightsum[i];
    }

    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<leftsum[i];
    }
    cout<<endl;

    int q;
    cin>>q;
    int total=rightsum[n];
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=total-(total-rightsum[r])-(total-leftsum[l]);
        cout<<max(0LL,ans*2)<<endl;
        
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}