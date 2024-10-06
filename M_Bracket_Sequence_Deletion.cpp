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

        deque<char>dq1;
        deque<char>dq2;
        int f=1;
        int ans=0;
        int presum=0;
        for(int i=0;i<n;i++){
            dq1.push_back(s[i]);
            dq2.push_front(s[i]);
            if(s[i]=='(') presum++;
            else presum--;

            if(presum<0){
                f=0;
            }

            if((dq1==dq2 && dq1.size()>=2)  || (presum==0 && f)){
                ans++;
                dq1.clear();
                dq2.clear();
                f=1;
                presum=0;
            }
            
        }

        cout<<ans<<" "<<dq1.size()<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}