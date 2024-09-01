#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int arr[50+9]={0};
        while (n--)
        {
            int l,r;
            cin>>l>>r;
            if(l<=k && r>=k){
                arr[l]++;
                arr[r+1]--;
            }
        }
        for(int i=1;i<=51;i++){
            arr[i]+=arr[i-1];
        }
        if(arr[k]>arr[k-1] && arr[k]>arr[k+1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}