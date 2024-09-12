#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<n;i+=2){
            if(k){
                int temp=a[i]-a[i+1];
                a[i+1]+= min(temp,k);
                k= k - min(temp,k);
            }
            else break;
        }
        int A=0;
        int B=0;
        for(int i=0;i<n;i++){
            if(i%2==0) A+=a[i];
            else B+=a[i];
        }
        cout<<A-B<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}