#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n+2];
        int brr[m+2];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }

        for(int i=0;i<m;i++){
            cin>>brr[i];
        }
        sort(arr,arr+n);
        sort(brr,brr+m);
        if(k%2==1 && brr[m-1]>=arr[0]){
            int ans=brr[m-1];
            for(int i=1;i<n;i++){
                ans+=arr[i];
            }
            cout<<ans<<endl;
        }

        else if(k%2==1 &&  brr[m-1]<arr[0]){
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=arr[i];
            }
            cout<<ans<<endl;
        }
        else {
            if(arr[0]<brr[m-1]){
                swap(arr[0],brr[m-1]);
            }
            sort(arr,arr+n);
            sort(brr,brr+m);
           if(brr[0]<arr[n-1]){
                swap(brr[0],arr[n-1]);
            }
            int ans=0;
            for(int i=0;i<n;i++){
                ans+=arr[i];
            }
            cout<<ans<<endl;
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}