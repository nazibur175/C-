#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void divisors(int n, auto &divisor){
    for(int i=1;i*i<=n;i++){
        if (n%i==0)
        {
            if (n/i!=i){
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
            else
               divisor.push_back(i);
        }
    }
}
void solve(){

        int x;
        cin>>x;
        vector<int>vector1;
        // vector<int>vector2;
        divisors(x,vector1);
        // divisors(y,vector2);

        sort(vector1.begin(),vector1.end());

        // sort(vector2.begin(),vector2.end());
        int ans=1e13;
        for(int i=0;i<vector1.size();i++){
            for(int j=i+1;j<vector1.size();j++){
                if(vector1[i]*vector1[j]==x){
                    ans=min(ans,max(vector1[i],vector1[j]));
                }
            }
        }
        if(x==1)cout<<1<<" "<<1<<endl;
        else
        cout<<x/ans<<" "<<ans<<endl;
        // for(auto x: vector1){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x: vector2){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}