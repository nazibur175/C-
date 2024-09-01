#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[10]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x%10]++;
        }
        vector<int>v;
        for(int i=0;i<10;i++){
            for(int j=0;j<min(a[i],1LL*3);j++){
                v.push_back(i);
            }
        }
        n=v.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if((v[i]+v[j]+v[k])%10==3){
                        ans=1;
                    }
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}