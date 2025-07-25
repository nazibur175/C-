#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        deque<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int temp=a[k-1];
        sort(a.begin(), a.end());
        while(!a.empty() && a.front() <= temp){
            a.pop_front();
        }
        map<int,int>mp;
        mp[temp]++;
        int time=0;
        while(!a.empty()){
            if(mp[a.front()]){
                a.pop_front();
                continue;
            }
            mp[a.front()]++;
            time += a.front()-temp;
            if(time>temp) break;
            temp = a.front();
            a.pop_front();
        }
        if(a.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}