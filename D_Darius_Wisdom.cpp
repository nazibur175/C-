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
        set<int>s[3];
        for(int i=0;i<n;i++){
            if(a[i]==0)s[0].insert(i);
            else if(a[i]==1)s[1].insert(i);
            else s[2].insert(i);
        }
        vector<pair<int,int>>ans;
        for(int i=n-1;i>=0;i--){
            if(a[i]==1){
                if(!s[2].empty()){
                    int temp = *(s[2].begin());
                    if(temp<i){
                        ans.push_back({temp+1,i+1});
                        s[2].erase(temp);
                        s[1].erase(i);
                        s[2].insert(i);
                        s[1].insert(temp);
                        a[i]=2;
                        a[temp]=1;
                    }
                }
            }
            else if(a[i]==0){
                if(!s[1].empty()){
                    int temp = *(s[1].begin());
                    if(temp<i){
                        ans.push_back({temp+1,i+1});
                        s[1].erase(temp);
                        s[0].erase(i);
                        s[1].insert(i);
                        s[0].insert(temp);
                        a[i]=1;
                        a[temp]=0;
                        if(!s[2].empty()){
                            temp = *(s[2].begin());
                            if(temp<i){
                                ans.push_back({temp+1,i+1});
                                s[2].erase(temp);
                                s[1].erase(i);
                                s[2].insert(i);
                                s[1].insert(temp);
                                a[i]=2;
                                a[temp]=1;
                            }
                        }
                    }
                }
            }
        }

        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}