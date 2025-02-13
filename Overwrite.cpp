#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int b[m+1];
        int mn=1e18;
        for(int i=1;i<=m;i++) {
            cin>>b[i];
            mn=min(mn,b[i]);
        }
        int mnin=0;
        for(int i=1;i<=m;i++){
            if(b[i]==mn){
                mnin=i;
                break;
            }
        }

        vector<int>bb;
        bb.push_back(0);
        for(int i=mnin;i<=m;i++){
            bb.push_back(b[i]);
        }
        for(int i=1;i<mnin;i++){
            bb.push_back(b[i]);
        }

        int abig=0;
        int in = n-m+1;
        int in2=1;
        for(int i=in;i<=n;i++){

            if(a[i]>bb[in2]){
                abig=1;
                break;
            }
            else if(a[i]==bb[in2]){
                in2++;
                continue;
            }
            else break;
         
        }

      
        
        int korchi=0;
        for(int i=1;i<=in;i++){
            if(korchi==1){
                a[i]=mn;
            }
            else if(a[i]>mn){
                a[i]=mn;
                if(m>1)
                korchi=1;
            }
            //a[i]=min(a[i],mn);
        }

        if(korchi==1 || abig==1){
            int temp=1;
            for(int i=in;i<=n;i++){
                a[i]=bb[temp];
                temp++;
            }
        }
        
        for(int i=1;i<=n;i++){
            cout<<a[i];
            if(i!=n) cout<<" ";
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