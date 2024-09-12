#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    cnt++;
                }
            }
        }
        int q;
        cin>>q;
        cnt = cnt%2;
        //cout<<cnt<<endl;
        while (q--)
        {
            
            int l,r;
            cin>>l>>r;
            int x = r-l + 1;
            int temp = x*(x-1)/2;
            if(temp%2) cnt = 1-cnt;
            if(cnt) cout<<"odd"<<endl;
            else cout<<"even"<<endl;
        }
        

    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}