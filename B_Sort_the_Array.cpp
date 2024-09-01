#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int f=0;
    int l=0;
    int r=0;
    vector<int>v;
    for(int i=1;i<=n-1;i++){
        if(a[i]<=a[i+1]) continue;
        else {
            if(f==0){
            l=i;
            while (a[i]>=a[i+1] && i+1<=n)
            {
                v.push_back(a[i]);
                i++;
            }
                v.push_back(a[i]);
            }
            r=i;
            f++;
        }
    }
    reverse(v.begin(),v.end());
    if(l-1>=0 && v.size()>1 && v[0]<a[l-1]){
        f++;
    }
    else if(r+1<=n && v.size()>1 && v.back()>a[r+1]) {
        f++;
    }
    //cout<<f<<endl;
    if(f==0){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else if(f==1) {
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else cout<<"no"<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}