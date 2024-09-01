#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        deque<int>d;
        int ans=0;
        for(int i=0;i<min(n,4LL);i++){
            d.push_back(a[i]);
        }
        deque<int>temp;
        temp=d;
        sort(temp.begin(),temp.end());
        if(n==2) ans=temp[0];
        else if(n>=3) ans=temp[1];
        if(n>=5){
            for(int i=4;i<n;i++){
                d.pop_front();
                d.push_back(a[i]);
                temp=d;
                sort(temp.begin(),temp.end());
                ans = max(ans, temp[1]);
            }
        }

        deque<int>dd;
        for(int i=0;i<min(n,3LL);i++){
            dd.push_back(a[i]);
        }
        temp=dd;
        sort(temp.begin(),temp.end());
        if(n>=3)
        ans = max(ans, temp[1]);
        if(n>=4){
            //deque<int>temp;
            for(int i=3;i<n;i++){
                dd.pop_front();
                dd.push_back(a[i]);
                temp=dd;
                sort(temp.begin(),temp.end());
                ans = max(ans, temp[1]);
            }
        }
        cout<<ans<<endl;
        //cout<<"----"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}