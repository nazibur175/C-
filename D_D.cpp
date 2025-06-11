#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int>ans;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<"1 1"<<endl;
        cout<<"1"<<endl;
        cout<<"1 1"<<endl;
        cout<<"1"<<endl;
        cout<<"1 1"<<endl;
        a[0]+=2;
        cout<<-1*a[0]<<endl;
    }
    else{
        cout<<"1 1"<<endl;
        cout<<-1*a[0]<<endl;
        cout<<"2 "<<n<<endl;
        for(int i=1;i<n;i++){
            cout<<(n-1)*(a[i]);
            if(i!=n-1) cout<<" ";
            a[i]+= (n-1)*(a[i]);
        }
        cout<<endl;
        cout<<"1 "<<n<<endl;
        cout<<0<<" ";
        for(int i=1;i<n;i++){
            cout<<-1*(a[i]);
            if(i!=n-1)cout<<" ";
        }
        cout<<endl;
    }

    
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}