#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9];
    int b[n+9]={0};
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[a[i]]++;
    }
    int ans=0;
    int a4=0,a3=0,a2=0,a1=0;
    a4=b[4];
    if(b[3]>b[1]){
        a3=b[3];
        b[1]=0;
    }
    else {
        a3=b[3];
        b[1]=b[1]-b[3];
    }

    a2=b[2]*2 + b[1];
    a2=ceil(double(a2)/4);
    cout<<a1+a2+a3+a4<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}