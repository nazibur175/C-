#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1){
                v.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            a[i]=max(0ll,a[i]);
        }

        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;

        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=(a[i+1]-a[i]);
        }
        if(v.size()==0){
            sum=abs(sum);
            cout<<sum<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
        else if(v.front()==0 && v.back()==n-1){
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
        else if(v.front()==0){
            a[0]=abs(sum);
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
        else if(v.back()==n-1){
            a[n-1]=abs(sum);
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
        else {
            sum=abs(sum);
            cout<<sum<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i];
                if(i!=n-1) cout<<" ";
            }
            cout<<endl;
        }
        // cout<<sum<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}