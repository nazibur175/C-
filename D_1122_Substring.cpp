#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    deque<int>dq;
    map<int,int>m;
    int ans=0;
    int l=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            dq.push_back(a[i]);
            m[a[i]]++;
            while (dq.back()==a[i+1])
            {
                dq.push_back(a[i+1]);
                m[a[i+1]]++;
                i++;
                if(m[a[i]]==2){
                    ans=max(ans,i-l+1);
                } 
            }

            while(m[dq.back()]>2){
                m[dq.front()]--;
                dq.pop_front();
                l++;    
            }
            //ans=max(ans,i-l+1);
        }
        else {
            dq.clear();
            m.clear();
            l=i+1;
        }
    }

    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}