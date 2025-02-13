#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int query(int i,int j){
    cout<<"? "<<i<<" "<<j;
    cout<<flush<<endl;
    int x;
    cin>>x;
    return x;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int fre[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            fre[a[i]]++;
        }

        int f=0;
        for(int i=1;i<=n;i++){
            if(fre[i]==0) {
                f=i;
                break;
            }
        }
        if(f==0){
            int in=0;
            int in2=0;
            for(int i=0;i<n;i++){
                if(a[i]==1){
                    in=i+1;
                }
                if(a[i]==n){
                    in2=i+1;
                }
            }
            int t1= query(in,in2);
            int t2= query(in2,in);
            if(t1==t2 && t1>=n-1){
                cout<<"! B"<<endl;
            }
            else cout<<"! A"<<endl;
        }
        else {
            int in=f;
            int in2=1;
            if(in==1) in2++;
            int t1= query(in,in2);
            if(t1==0) cout<<"! A"<<endl;
            else cout<<"! B"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}