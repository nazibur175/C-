#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;

        int a[n+9];
        map<int,int>m;
        int pos=0;
        int neg=0;
        vector<int>v;
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            if(a[i]>0) pos++;
            else if(a[i]<0) neg++;
            if(a[i]!=0 || c<=4){
                v.push_back(a[i]);
                c++;
            }

        }
        
        if(pos>2 || neg>2) cout<<"NO"<<endl;
        else if(n==m[0]) cout<<"YES"<<endl;
        else {
            int f=0;
            int n=v.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        if(m[v[i]+v[j]+v[k]]==0){
                            f=1;
                            break;
                        }
                    }
                }
            }

            if(f==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}