#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        vector<pair<int,int>>ans;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        for(int i=1;i<=n;i++){
            int tar_ina=0;
            int tar_inb=0;
            int f1=1;
            int f2=1;
            for(int j=i;j<=n;j++){
                if(a[j]==i){
                    tar_ina=j;
                }
                else if(b[j]==i){
                    tar_ina=j;
                    f1=0;
                }
                if(a[j]==n+i){
                    tar_inb=j;
                    f2=0;
                }
                else if(b[j]==n+i){
                    tar_inb=j;
                }
                if(tar_ina && tar_inb) break;
            }
            if(f1==0 && f2==0 && tar_ina==tar_inb){
                ans.push_back({3,tar_ina});
                a[tar_ina]=i;
                b[tar_inb]=n+i;
            }
            else{
                if(f1==0){
                    ans.push_back({3,tar_ina});
                    int temp=a[tar_ina];
                    a[tar_ina]=i;
                    b[tar_ina]=temp;
                }
                if(f2==0){
                    ans.push_back({3,tar_inb});
                    int temp=b[tar_inb];
                    b[tar_inb]=n+i;
                    a[tar_inb]=temp;
                }
            }
            for(int j=tar_ina;j>i;j--){
                ans.push_back({1,j-1});
                swap(a[j],a[j-1]);
            }
            for(int j=tar_inb;j>i;j--){
                ans.push_back({2,j-1});
                swap(b[j],b[j-1]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<" "<<it.second<<endl;
        }
        //cout<<"----"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}