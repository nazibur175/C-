#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int sum = n*(n+1)/2;
        int sq=sqrt(sum);
        if(sq*sq==sum) cout<<"-1"<<endl;
        else{
            vector<int>ans;
            deque<int>res;
            int presum=0;
            for(int i=1;i<=n;i++){
                res.push_back(i);
            }

             while (res.size())
                {
                    presum+=res.front();
                    sq=sqrt(presum);
                    if(sq*sq!=presum){
                        ans.push_back(res.front());
                        res.pop_front();
                    }
                    else{
                        presum-=res.front();
                        res.push_back(res.front());
                        res.pop_front();
                    }
                }
            for(int i=0;i<ans.size();i++){
                cout<<ans[i];
                if(i!=ans.size()-1) cout<<" ";
            }
            cout<<endl;

        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}