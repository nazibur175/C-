#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lo=-1e12;
int n,k;
int cal(vector<int>&a){
    int cursum=0;
    int ans = 0;
    int mi=INT64_MIN;
    for(int i=0;i<n;i++){
        cursum=max(1LL*0,cursum+a[i]);
        ans = max(ans,cursum);
        mi=max(mi,a[i]);
    }
    if(ans==0) return mi;
    else return ans;
}
void solve(){
    test{
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>a(n);
        int target_in=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(s[i]=='0'){
                a[i]=lo;
                target_in=i;
            }
        }
        int cur = cal(a);
        if(target_in==-1 && cur!=k){
            cout<<"No"<<endl;
        }
        else if(cur>k) cout<<"No"<<endl;
        else{
            int l=a[target_in];
            int r=1e13;
            while (r-l>1)
            {
                int mid = (l+r)/2;
                a[target_in]=mid;
                if(cal(a)==k){
                    break;
                }
                else if(cal(a)<k){
                    l=mid;
                }
                else r=mid;
            }
            cout<<"Yes"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1)cout<<" ";
                else cout<<endl;
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