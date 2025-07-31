#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,s;
        cin >>n>>s;
        vector<int>a(n);
        int c0=0,c1=0,c2=0;
        int total=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            total+=a[i];
            if(a[i]==0)c0++;
            else if(a[i]==1)c1++;
            else if(a[i]==2)c2++;
        }
        
        if(s<total){
            for(int i=0;i<c0;i++) cout<<0<<' ';
            for(int i=0;i<c1;i++) cout<<1<<' ';
            for(int i=0;i<c2;i++) cout<<2<<' ';
            cout<<"\n";
        }
        else if(s==total){
            cout<<-1<<"\n";
        }
        else {
            int lage=s-total;
            if(lage==1){
                for(int i=0;i<c0;i++) cout<<0<<' ';
                for(int i=0;i<c2;i++) cout<<2<<' ';
                for(int i=0;i<c1;i++) cout<<1<<' ';
                cout<<"\n";
            } else {
                cout<<-1<<"\n";
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}