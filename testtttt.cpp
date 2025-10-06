#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        char a[n][n];
        if(k!=(n*n-1)) {
            cout<<"YES"<<endl;
            int lim=n*(n-1);
            int cnt=0;
            if(k>(n*(n-1))){
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        cnt++;
                        if(cnt<=k)
                            a[i][j]='U';
                        else if(cnt==k+1){
                            a[i][j]='R';
                        }
                        else a[i][j]='L';
                    }
                }
            }
            else {
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        cnt++;
                        if(cnt<=k){
                            a[i][j]='U';
                        }
                        else if(cnt<=lim){
                            a[i][j]='D';
                        }
                        else if(i==n-1 && j==0){
                            a[i][j]='R';
                        }
                        else{
                            a[i][j]='L';
                        }
                        
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j];
                    
                }
                cout<<endl;
            }
        }
        else {
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