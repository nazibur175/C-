#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int extra = n%sum;
        int ans = n/sum;
        int temp = ans*sum;
        ans*=3;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        for(int i=0;i<3;i++){
            if(temp>=n)break;
            temp+=v[i];
            ans++;

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