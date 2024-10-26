#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int f=0;
    if(n>=50) {
        cout<<"Yes"<<endl;
        return;
    }
    else {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        if((a[i]^a[j]^a[k]^a[l])==0){
                            cout<<"Yes"<<endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}