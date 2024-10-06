#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        set<int>s;
        int is_all_k=1;
        int is_all_div=1;
        int f=1;
        int cnt_seg=0;
        for(int i=0;i<n;i++){
            if(a[i]!=k) is_all_k=0;
            if(a[i]%k!=0)
                is_all_div=0;
            

            if(a[i]==k && f==0){
                f=1;
            }

            if(a[i]!=k && f==1){
                cnt_seg++;
                f=0;
            }
            if(a[i]!=k)
            s.insert(a[i]);
        }

        if(is_all_k) cout<<0<<endl;
        else if(is_all_div) cout<<1<<endl;
        else if(s.size()==1 && cnt_seg==1) cout<<1<<endl;
        else cout<<2<<endl;
       
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}