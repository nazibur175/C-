#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    cin>>n>>q;
    int  a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int len= sqrt(n)+1;
    vector<int>b(n,0);
    set<int>s1;
    for(int i=0;i<n;i++){
        s1.insert(a[i]);
        b[i/len]=s1.size();
        //b[i/len]+=a[i];
    }
    
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int ans=0;
        set<int>s2;
        for(int i=l;i<=r;){
            if(i%len==0 && (i+len-1)<=r){
                ans+=b[i/len];
                i+=len;
            }
            else {
                s2.insert(a[i]);
                //ans+=s2.size();
                //ans+=a[i];
                i++;
            }
        }
        cout<<ans+s2.size()<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}